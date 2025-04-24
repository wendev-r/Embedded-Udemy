/*
 * main.c
 *
 *  Created on: Apr 23, 2025
 *      Author: rouse
 */


#include<stdio.h>

int main(void){
	char c1, c2, c3, c4,c5,c6;

	printf("Enter the six characters: ");
	fflush(stdout);
	scanf("%c %c %c %c %c %c", &c1,&c2, &c3, &c4,&c5, &c6);

	printf("\nThe ASCII values are %u,%u,%u,%u,%u,%u", c1, c2, c3, c4,c5,c6 );
	//getChar() pulls the next character in the input buffer which is '\n' beacause the user presses enter after each scanf leaving '\n' unread until it reaches getChar
	printf("\nPress enter to exit the application");
	while(getchar() != '\n'){

	}
	getchar(); //wait until user presses an character
}
