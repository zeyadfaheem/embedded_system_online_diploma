/*
 ============================================================================
 Name        : 7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, count;
	unsigned long long int factorial= 1;
	printf (" enter an integer: ");
	scanf (" %d",&a);
	if (a<0)
		printf ("error!!!!");
	else
	{
		for (count=1;count<=a;++count)
		{
			factorial= factorial*count;
		}
		printf ("factorial = %lu",factorial);
	}
	return 0;
}
