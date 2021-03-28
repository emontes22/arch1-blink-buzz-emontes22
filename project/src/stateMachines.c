#include <msp430.h>
#include "stateMachines.h"
#include "led.h"
#include "buzzer.h"
#include "switches.h"

void blinkGreen()
{
  static char state = 0;
  
  switch(state)
    {
    case 0: red_on = 1; green_on = 0; state++; break;
    case 1: red_on = 0; green_on = 0; state++; break;
    case 2: red_on = 1; green_on = 0; state++; break;
    case 3: red_on = 0; green_on = 0; state = 0; break;
    }
  led_changed = 1;
  led_update();
}

void blinkRed()
{
  
}

void state_advance()
{
  switch(bPressed)
    {
    case 1: blinkGreen(); break;
    }
}
