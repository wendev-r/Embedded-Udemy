/*
 * main.c
 *
 *  Created on: Apr 25, 2025
 *      Author: rouse
 */


#include <stdint.h>
#include <stdio.h>


int main(void){
	int32_t num1, num2;
	num1 = 10;
	num2 = 12;

	printf("Bitwise AND: %d\n", (num1&num2));
	printf("Bitwise OR: %d\n", (num1|num2));
	printf("Bitwise XOR: %d\n", (num1^num2));
	printf("Bitwise NOT: %d\n", (~num1));
	printf("Bitwise AND: %d\n", (0&1));


}
