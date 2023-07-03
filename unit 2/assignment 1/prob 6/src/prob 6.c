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
	int x, y, temp;
	printf ("Enter value of a: ");
	fflush (stdin); fflush (stdout);
	scanf ("%d",&x);
	printf ("Enter value of b: ");
		fflush (stdin); fflush (stdout);
		scanf ("%d",&y);
		temp=x;
		x=y;
		y=temp;
		printf ("value of a after swapping %d \n",x);
		printf ("value of b after swapping %d \n",y);
	return 0;
}
