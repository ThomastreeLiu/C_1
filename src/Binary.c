#include<stdio.h>
#include"number_request.h"
#include"number_determine.h"
#include"number_calc.h"

int main(void){
	int numd = getnum();
	int digit = getdigit(numd);
	printf("%d digits required\n", digit);
	int ans = getans(digit, numd);
	printf("The final answer is %d\n", ans);
	return 0;	
}
