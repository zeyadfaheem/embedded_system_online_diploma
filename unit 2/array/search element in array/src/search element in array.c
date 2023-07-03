/*
 ============================================================================
 Name        : search.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[10], ele, num, i;
	printf ("Enter no of element: ");
	fflush (stdin); fflush (stdout);
	scanf ("%d",&num);
	printf ("Enter the values: ");
	for (i=0;i<num;i++) {
		scanf ("%d",&a[i]);
	}
	printf ("Enter the element to be searched: ");
		fflush (stdin); fflush (stdout);
		scanf ("%d",&ele);
		i=0;
		while(i<num && ele != a[i]) {
			i++;
		}
		if (i<num) {
			printf ("Number found at location = %d",i+1);
		}
		else {
			printf ("Number not found");
		}
	return 0;
}
