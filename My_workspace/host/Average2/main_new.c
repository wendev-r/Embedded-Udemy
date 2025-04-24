/*
 * main_new.c
 *
 *  Created on: Apr 23, 2025
 *      Author: rouse
 */


#include<stdio.h>

int main(void){
	float num1, num2, num3;
	float average;

	printf("Enter the three numbers: ");
	fflush(stdout);
	scanf("%f %f %f", &num1,&num2, &num3);

	average= (num1+num2+num3)/3;
	printf("\nAverage is: %0.3lf", average);
	//getChar() pulls the next character in the input buffer which is '\n' beacause the user presses enter after each scanf leaving '\n' unread until it reaches getChar
	printf("\nPress enter to exit the application");
	while(getchar() != '\n'){

	}
	getchar(); //wait until user presses an character
}
