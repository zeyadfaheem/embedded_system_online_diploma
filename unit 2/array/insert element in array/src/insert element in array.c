/*
 ============================================================================
 Name        : insert.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[30], element, num, i, location;
	printf ("Enter number of element: ");
	fflush (stdin); fflush (stdout);
	scanf ("%d", &num);
	for (i=0;i<num;++i) {
		scanf ("%d",&arr[i]);
	}
	printf ("\nEnter the element to be inserted: ");
	fflush (stdin); fflush (stdout);
	scanf ("%d", &element);
	printf ("\nEnter the location: ");
	fflush (stdin); fflush (stdout);
	scanf ("%d", &location);
	for (i=num;i>=location;i--) {
		arr[i]=arr[i-1];
	}
	num++;
	arr [location-1]=element;
	for (i=0;i<num;++i)
		printf ("n %d", arr[i]);
	return 0;
}
