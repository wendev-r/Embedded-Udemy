/*
 * main.c
 *
 *  Created on: May 2, 2025
 *      Author: rouse
 */

struct DataSet{
	char data;
	int data2;
	char data3;
	short data4;
};

int main(void){
	struct DataSet data;
	data.data = 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.data4 = 0xABCD;

	struct DataSet *pData;

	pData = &data;

	pData->data= 0x55;

	return 0;



}
