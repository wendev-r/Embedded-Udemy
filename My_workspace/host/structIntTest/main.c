/*
 * main.c
 *
 *  Created on: May 2, 2025
 *      Author: rouse
 */


#include <stdint.h>
#include <stdio.h>

struct carModel{
	uint32_t carNumber;
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float carWeight;


};

int main(void){

	struct carModel carBMW= {2000,20,30,1300};
	//Can also create like this:
	struct carModel carHonda= {.carNumber = 3000, .carPrice = 20, .carMaxSpeed= 30,.carWeight = 1300};
	printf("Details of carBMW is %u\n", carBMW.carNumber);
	printf("Size of structure is %u\n", sizeof(struct carModel) );
	return 0;
}
