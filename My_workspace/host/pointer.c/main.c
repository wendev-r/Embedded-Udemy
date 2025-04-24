/*
 * main.c
 *
 *  Created on: Apr 23, 2025
 *      Author: rouse
 */

#include<stdio.h>
int main(void)
{
	long long int someAddresss = 0x00007FFF8E3C3824; //not a pointer

	char* address1 = (char*) 0x00007FFF8E3C3824; //pointer that yields 1 byte of data
	int* address2 = (int*) 0x00007FFF8E3C3824; //pointer that yields 4 byte of data

	long long int* address3 = (long long int*) 0x00007FFF8E3C3824; //pointer that yields 8 byte of data

}
