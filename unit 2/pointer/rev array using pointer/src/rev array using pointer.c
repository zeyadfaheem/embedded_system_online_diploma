/*
 ============================================================================
 Name        : rev.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, arr[15];
	int* pt;
	printf ("Input the number of elements to store in array (max 15):\n");
	fflush(stdin);fflush(stdout);
	scanf ("%d",&a);
	pt=&arr[0];
	printf ("Input %d number of element in array:\n",a);
	for (b=0;b<a;b++) {
	printf ("Element-%d: ",b+1);
	fflush(stdin);fflush(stdout);
	scanf ("%d",pt);
	pt++;
	}
	pt= &arr[a-1];
	printf ("Array in reverse order:\n ");
	for (b=a;b>0;b--) {
		printf ("\nElement-%d: %d",b,*pt);
		pt--;
	}
	return 0;
}
