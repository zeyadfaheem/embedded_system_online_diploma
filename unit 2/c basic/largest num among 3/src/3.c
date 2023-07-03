/*
 ============================================================================
 Name        : 3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a, b, c;
	printf ("enter three number:");
	scanf ("%f %f %f", &a, &b, &c);
	if ((a>b)&&(a>c))
		printf (" largest number=%.2f",a);
	if ((b>a)&&(b>c))
			printf (" largest number=%.2f",b);
	if ((c>a)&&(c>b))
			printf (" largest number=%.2f",c);


	return 0;
}
