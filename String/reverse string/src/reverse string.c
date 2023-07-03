/*
 ============================================================================
 Name        : reverse.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str [100], temp;
	int i, j=0;
	printf ("Enter a string: ");
	fflush (stdin); fflush (stdout);
	gets (str);
	i=0;
	j= strlen (str) -1;
	while (i<j) {
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf ("Reverse string is: %s",str);
	return 0;
}
