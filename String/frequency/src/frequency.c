/*
 ============================================================================
 Name        : frequency.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c[1000],ch;
		int i, count=0;
		printf ("Enter a string: ");
		fflush (stdin); fflush (stdout);
		gets (c);
		printf ("Enter character to find frequency: ");
		fflush (stdin); fflush (stdout);
		scanf ("%c",&ch);
		for (i=0;c[i]!='\0';++i)
		{
			if (ch==c[i])
				++count;
		}
		printf ("Frequency of %c = %d",ch, count);
	return 0;
}
