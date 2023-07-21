/*
 ============================================================================
 Name        : add.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct complex {
	float real;
	float imaginary;
}complex;
complex add(complex a1,complex a2);
int main(void) {
	complex a1,a2,sum;
	printf ("For 1st complex number:\n");
	printf ("Enter the real and imaginary respectively: ");
	fflush(stdin);fflush(stdout);
	scanf ("%f%f",&a1.real,&a1.imaginary);
	printf ("For 2st complex number:\n");
	printf ("Enter the real and imaginary respectively: ");
	fflush(stdin);fflush(stdout);
	scanf ("%f%f",&a2.real,&a2.imaginary);
	sum.real=a1.real+a2.real;
	sum.imaginary=a1.imaginary+a2.imaginary;
	printf ("Sum=%.1f+.%.1fi",sum.real,sum.imaginary);
	sum=add(a1,a2);
	printf ("Sum=%.1f+%.1fi",sum.real,sum.imaginary);
	return 0;
}
complex add(complex a1,complex a2) {
	complex sum;
	sum.real=a1.real+a2.real;
	sum.imaginary=a1.imaginary+a2.imaginary;
	return sum;
}
