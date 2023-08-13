/*
 ============================================================================
 Name        : alphabets.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char alpha [27];
	int x;
	char* a;
	a=alpha;
	for (x=0;x<26;x++) {
		*a=x+'A';
		a++;
	}
	a=alpha;
	printf ("The alphabets are:\n");
	for (x=0;x<26;x++) {
		printf (" %c ",*a);
		a++;
	}
	return 0;
}


