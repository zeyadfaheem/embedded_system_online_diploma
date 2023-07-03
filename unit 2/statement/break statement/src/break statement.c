/*
 ============================================================================
 Name        : break.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num, sum, average;
	int a, n;
	printf ("maximum no. of inputs/n:");
	scanf ("%d",&n);
	for (a=1;a<=n;++a) {
		printf ("enter n%d/n:",a);
		scanf ("%f",&num);
		if (num<0.0)
			break;
		sum= sum+num;
	}
	average= sum /(a-1);
	printf (" average = %.2f/n",average);
	return 0;
}
