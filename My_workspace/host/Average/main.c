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
	scanf("%f", &num1);

	printf("\nEnter the second number:");
	scanf("%f", &num2);

	printf("\nEnter the third number:");
	scanf("%f", &num3);

	average= (num1+num2+num3)/3;
	printf("\nAverage is: %f", average);
}

