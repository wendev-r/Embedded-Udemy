/*
 * main.c
 *
 *  Created on: Apr 23, 2025
 *      Author: rouse
 */


#include <stdio.h>
int main(void)
{
	char data = 100;
	printf("Address of the variable data is %d\n",data);
	printf("Address of the variable data is: %p\n", &data);

	//Create a pointer variable and store the addresss of data variable
	char* pAddress = &data;

	//Print 1 byte of data from the pointer (100)
	char value = *pAddress;
	printf("read value is: %d\n", value);

	//Perform write operation on pointer to change data

	*pAddress=65;
	printf("Value of data is : %d\n", data);

}
