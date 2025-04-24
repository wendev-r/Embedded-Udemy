/*
 * main.c
 *
 *  Created on: Apr 23, 2025
 *      Author: rouse
 */


#include<stdio.h>

int main(void)
{
	double charge,chargeE;
	printf("Enter the charge:");
	scanf("%lf", &charge);

	printf("Enter the charge of the electron:");
	scanf("%le", &chargeE);

	electrons(charge/chargeE);
	printf("Total number of electrons = %lf\n", electrons);
	printf("Total number of electrons = %l2\n", electrons);
	while(getchar() != '\n'){

	}
	getchar(); //wait until user presses an character

}
