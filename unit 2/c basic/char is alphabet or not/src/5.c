/*
 ============================================================================
 Name        : 5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	printf ("enter your character:");
	scanf ("%c",&c);
	if ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		printf (" %c is an alphabet",c);
	else
		printf (" %c is not alphabet",c);


	return 0;
}
