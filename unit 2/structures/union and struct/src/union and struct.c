/*
 ============================================================================
 Name        : union.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
union student {
	char name[32];
	int roll;
	double marks;
}u;
struct job {
	float salary;
	int working_hours;
	char ame[32];
}s;
int main(void) {
	printf ("Size of union=%d\nSize of structure=%d",sizeof(u),sizeof(s));
	return 0;
}
