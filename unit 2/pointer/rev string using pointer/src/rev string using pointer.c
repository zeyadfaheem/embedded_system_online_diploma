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
	char a[30];
		char rev[30];
		char* b=a;
		char* c=rev;
		int x= -1;
		printf ("String in reverse order:\n");
		printf ("Input a string: ");
		fflush(stdin);fflush(stdout);
		scanf ("%s",a);
		while (*b){
			b++;
			x++;
		}
		while (x>=0){
			b--;
			*c=*b;
			c++;
			--x;
		}
		*c='\0';
		printf ("Reverse string is: %s",rev);
		return 0;
}
