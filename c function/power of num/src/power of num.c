/*
 ============================================================================
 Name        : power.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power (int a,int b);
int main(void)
{
	int a, b;
	printf ("Enter base number: ");
	fflush(stdin), fflush(stdout);
	scanf ("%d",&a);
	printf ("Enter power number (positive integer): ");
	fflush(stdin), fflush(stdout);
	scanf ("%d",&b);
	printf ("%d^%d = %d",a, b, power(a,b));
	return 0;

}
int power (int a,int b)
{
	if (b!=0)
		return (a*power(a,b-1));
	else
		return 1;
}

