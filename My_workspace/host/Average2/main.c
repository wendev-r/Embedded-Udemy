/*
 * main.c
 *
 *  Created on: Apr 23, 2025
 *      Author: rouse
 */

#include<stdio.h>

int main(void){
	float num1, num2, num3;
	float average;

	printf("Enter the first number:");
	fflush(stdout);
	scanf("%f", &num1);

	printf("\nEnter the second number:");
	fflush(stdout);
	scanf("%f", &num2);

	printf("\nEnter the third number:");
	fflush(stdout);
	scanf("%f", &num3);

	average= (num1+num2+num3)/3;
	printf("\nAverage is: %f", average);
	//getChar() pulls the next character in the input buffer which is '\n' beacause the user presses enter after each scanf leaving '\n' unread until it reaches getChar
	printf("\nPress enter to exit the application");
	while(getchar() != '\n'){

	}
	getchar(); //wait until user presses an character
}

