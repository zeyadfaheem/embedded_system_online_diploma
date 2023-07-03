/*
 ============================================================================
 Name        : factorial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int factorial(int n);
int main(void)
{
	int n;
		printf ("Enter an integer positive: ");
		fflush (stdin); fflush (stdout);
		scanf ("%d",&n);
		printf ("Factorial of %d = %ld" ,n,factorial(n));
		return 0;
	}
int factorial(int n)
	{
		if (n!=1)
			return n*factorial(n-1);

	}
