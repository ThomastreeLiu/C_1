#include<stdio.h>
#include"number_request.h"
#include"number_determine.h"

int main(void){
	int numd = getnum();
	int digit = getdigit(numd);
	printf("The number is %d\n", numd);
	printf("%d digits required\n", digit);
	return 0;	
}
