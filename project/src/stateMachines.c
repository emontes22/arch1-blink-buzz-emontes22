#include <msp430.h>
#include "stateMachines.h"
#include "led.h"
#include "buzzer.h"
#include "switches.h"

void blinkGreen()
{
  buzzer_set_period(1500);
  red_on = 1;
  leds_changed = 1;
  led_update();
}

void blinkRed()
{
  buzzer_set_period(0);
  green_on = 1;
  red_on = 0;
  leds_changed = 1;
  led_update();
}

void state_advance()
{
  switch(bPressed)
    {
    case 1: blinkGreen();
      break;
    case 2: blinkRed();
      break;
    }
}
