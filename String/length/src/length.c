/*
 ============================================================================
 Name        : Length.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char s [1000], i;
		printf ("Enter a string: ");
		fflush (stdin); fflush (stdout);
		scanf ("%s",&s);
		for (i=0;s[i]!='\0';++i);
		printf ("Length of string: %d",i);
	return 0;
}
