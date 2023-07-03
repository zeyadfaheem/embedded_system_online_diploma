/*
 ============================================================================
 Name        : continue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, num, product;
	for (a=1,product=1;a<=4;++a){
		printf ("enter num %d:",a);
		scanf ("%d",&num);
		if (num==0)
			continue;
		product = product*num;
	}
	printf ("product=%d",product);
	return 0;
}
