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
	int a, b;
	printf ("Enter two integers number: ");
	fflush (stdin); fflush (stdout);
	scanf ("%d %d",&a,&b);
	printf ("sum %d",(a+b));
	return 0;
}
