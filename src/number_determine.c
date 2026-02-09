//this is the function of getting the input

#include<stdio.h>
#include<math.h>
#include"number_determine.h"

int getdigit(int numd){
	int digit = 1;
	for(int i = 0; i==0;){
		if((int)pow(2, digit)<=numd)
			digit = digit+1;
		else
			i = 1;
	}
	return digit;
}
