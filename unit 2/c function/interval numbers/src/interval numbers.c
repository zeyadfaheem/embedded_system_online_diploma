/*
 ============================================================================
 Name        : interval.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int check_prime (int num);
int main(void) {
	int n1, n2, flag, i;
	printf ("Enter two numbers (intervals): ");
	fflush (stdin); fflush (stdout);
	scanf ("%d %d", &n1, &n2);
	printf ("prime numbers between %d and %d are : ", n1, n2);
	for (i=n1+1;i<n2;++i)
	{
		flag= check_prime (i);
		if (flag==0)
			printf ("%d ",i);
	}
	return 0;
}
int check_prime (int num)
{
	int j, flag=0;
	for (j=2;j<num/2;++j) {
		if (num%j==0) {
			flag=1;
			break;
		}
	}
	return flag;
}
