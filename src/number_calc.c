//this is the function of getting the answer

#include<stdio.h>
#include<math.h>
#include"number_calc.h"

int getans(int digit, int numd){
	digit = digit-1;
	int ans = 0;
	while(digit>=0){
		if((int)pow(2, digit)<=numd){
			ans = ans+(int)pow(10,digit);
			numd= numd-(int)pow(2,digit);
			printf("In the %dth digit, the number is 1, the number symbolized is %d\n", digit+1, (int)pow(2,digit));
			digit = digit-1;
		}
		else{
			printf("In the %dth digit, the number is 0\n", digit+1);
			digit = digit-1;
		}
	}
	return ans;
}
