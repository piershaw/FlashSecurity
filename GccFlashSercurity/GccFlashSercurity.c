/*
 * GccFlashSercurity.c
 *
 * Created: 9/4/2016 8:22:54 PM
 *  Author: piershaw
 * replaces a D FlipFlop and Counter
 */ 


#include <avr/io.h>

int main(void){
	DDRB = 0b00000001; //direction registers inputs but pin 0
	PINB = (0<<PINB3) | (0<<PINB4);
	int counter = 0;
	//int pinin = 0;// to out put led indecator 
    while(1){
	
		if(PINB == (1<<PINB3)){// meow!! works
			//_delay_ms(500);   
			//PINB |= (1<<PINB0);
			//_delay_ms(500);
			//PINB |= ~(1<<PINB0);
			counter++;
			printf("counter",counter);
			if(counter >= 10000){
				counter = 0;
				PINB |= (1<<PINB0); // to Relay
			}
		}
	}
}