/*
 ============================================================================
 Name        : handle.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* a;
	int b=25;
	printf ("Address of b: %p\n ",&b);
	printf ("Value of b: %d\n",b);
	a=&b;
	printf ("Now a is assigned with address of b.\n");
	printf ("Address of pointer a: %p\n",a);
	printf ("Value of pointer a:%d\n",*a);
	b=34;
	printf ("The value of b assigned to 34 now.\n");
	printf ("Address of pointer a: %p\n",a);
	printf ("Value of pointer a:%d\n",*a);
	*a=7;
	printf ("Now a is assigned with the value 7.\n");
	printf ("Address of b: %p\n",&b);
	printf ("Value of b:%d\n",b);

	return 0;
}
