//this is the function of getting the input

#include<stdio.h>
#include"number_request.h"

int getnum(void){
	printf("Type in the number you want to convert\n");
	int num10;
	scanf("%d", &num10);
	return num10;
}
