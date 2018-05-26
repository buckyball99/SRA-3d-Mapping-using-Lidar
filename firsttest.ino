 
#include<SRA16.h>

void setup(){
  // put your setup code here, to run once:
DDRC=0b00000100; // LED 5 
DDRB=0b00000011; // LED 6 7
DDRD=0b11100000;// PWM pins

}

// ENABLE PD5
// DIRECTION PD6
// STEP PD7


void loop() {
  // put your main code here, to run repeatedly:
    for(int x=0;x<4;x++)
    {
      for(int y=0;y<50;y++)
      {
        PORTD=0b11100000;
        PORTC=0b00000100;
        PORTB=0b00000011;
        delay(50);
        PORTD=0b01100000;
        PORTC=0b00000100;
        PORTB=0b00000010;
        delay(50);
      }
      delay(1000);
    }

}
