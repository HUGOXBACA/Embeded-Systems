/*
 *
 */

#include "lab2.h"                               // Lab specific defines/declarations

#define LED_RED         (0x01)
#define RGB_RED         (0x02)
#define RGB_GREEN       (0x04)
#define RGB_BLUE        (0x08)

void task_2(void)
{
  // Declare a delay counter
  volatile uint16_t i;
  //
  // TODO: Declare a toggling counter


  while (1)
  {
    // Toggle an LED
    toggle(LED_RED);

    //
    // TODO: Print and increment the counter


    // Delay of ~166ms
    for (i = 0; i < 50000; i++);
  }
}
