//this is the function of getting the answer in array form

#include<stdio.h>
#include<math.h>
#include"number_calc_arr.h"

int getans_a(int digit, int numd, int *arr){
	digit = digit-1;
	while(digit>=0){
		if((int)pow(2, digit)<=numd){
			arr[digit]=1;
			numd= numd-(int)pow(2,digit);
			printf("In the %dth digit, the number is 1, the number symbolized is %d\n", digit+1, (int)pow(2,digit));
			digit = digit-1;
		}
		else{
			printf("In the %dth digit, the number is 0\n", digit+1);
			arr[digit]=0;
			digit = digit-1;
		}
	}
	return 0;
}
