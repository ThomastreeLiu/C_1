#include<stdio.h>
#include"number_request.h"
#include"number_determine.h"
//#include"number_calc.h"
#include"number_calc_arr.h"
//the parts be commeted are no longer used

int main(void){
	int numd = getnum();
	int digit = getdigit(numd);
	printf("%d digits required\n", digit);
//	if(digit>10){
//		printf("digit over 10, turn into array mode\n");
		int arr[digit];
		getans_a(digit, numd, arr);
		printf("The final answer is ");
		digit = digit-1;
		while(digit>=0){
			printf("%d", arr[digit]);
			digit=digit-1;
		}
		printf("\n");
//	}
/*	else{
		int ans = getans(digit, numd);
		printf("The final answer is %d\n", ans);
	}*/
	return 0;	
}
