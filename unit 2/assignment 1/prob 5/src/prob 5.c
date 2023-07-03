/*
 ============================================================================
 Name        : prob.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	printf ("Enter a character: ");
	fflush (stdin); fflush (stdout);
	scanf ("%c",&ch);
	printf ("ASII code is %d",ch);

	return 0;
}
