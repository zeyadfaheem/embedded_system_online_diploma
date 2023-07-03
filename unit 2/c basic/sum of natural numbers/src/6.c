/*
 ============================================================================
 Name        : 6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, count, sum=0;
	printf ("enter integer number: ");
	scanf ("%d",&a);
	count= 1;
	while (count<=a)
	{
		sum= sum + count;
		++count;
	}
	printf (" sum= %d",sum);
	return 0;
}
