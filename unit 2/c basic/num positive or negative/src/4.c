/*
 ============================================================================
 Name        : 4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num;
	printf ("enter the number: ");
	scanf ("%f",&num);
	if (num>0)
		printf (" %.2f number is positive ",num);
	else if (num<0)
		printf (" %.2f number is negative ",num);
	else
		printf ("you entered zero");
	return 0;
}
