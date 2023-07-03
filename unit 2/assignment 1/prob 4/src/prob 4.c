/*
 ============================================================================
 Name        : prob.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a, b;
		printf ("Enter two numbers: ");
		fflush (stdin); fflush (stdout);
		scanf ("%f %f",&a,&b);
		printf ("product %f",(a * b));
	return 0;
}
