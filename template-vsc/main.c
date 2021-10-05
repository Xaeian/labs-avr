#define __AVR_ATmega328P__
#define F_CPU 1000000

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  // init()
  DDRD |= 0xFF;

  while (1)
  {
    // loop();
    _delay_ms(100);
    PORTD |= (1 << 0);
    _delay_ms(100);
    PORTD &= ~(1 << 0);
  }
}