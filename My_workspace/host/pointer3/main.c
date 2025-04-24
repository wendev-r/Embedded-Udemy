/*
 * main.c
 *
 *  Created on: Apr 23, 2025
 *      Author: rouse
 */


#include <stdio.h>

long long int g_data= 0xFFFEABCD11112345;
int main(void)
{
	char *pAddress1;
	pAddress1 = (char*)&g_data;
	//Only prints one byte of data
	printf("Value at address %p is : %x\n", pAddress1, *pAddress1);

	int *pAddress2;
	pAddress2 = (int*)&g_data;
	//Only prints 4 bytes of data
	printf("Value at address %p is : %x\n", pAddress2, *pAddress2);


	long long int *pAddress3;
	pAddress3 = (long long int*)&g_data;
	//Only prints 8 bytes of data
	printf("Value at address %p is : %I64x\n", pAddress3, *pAddress3);
	return 0;

}

