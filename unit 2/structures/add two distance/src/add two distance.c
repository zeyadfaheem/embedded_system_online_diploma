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
struct distance {
	int feet;
	float inch;
}a1,a2,sum;
int main(void) {
	printf ("Enter information for 1st distance:\n");
	printf ("Enter feet: ");
	fflush(stdin);fflush(stdout);
	scanf ("%d",&a1.feet);
	printf ("Enter inch: ");
	fflush(stdin);fflush(stdout);
	scanf ("%f",&a1.inch);
	printf ("Enter information for 2st distance:\n");
	printf ("Enter feet: ");
	fflush(stdin);fflush(stdout);
	scanf ("%d",&a2.feet);
	printf ("Enter inch: ");
	fflush(stdin);fflush(stdout);
	scanf ("%f",&a2.inch);
	sum.feet=a1.feet+a2.feet;
	sum.inch=a1.inch+a2.inch;
	if (sum.inch>12) {
		sum.inch=sum.inch-12.0;
		++sum.feet;
	}
	printf ("Sum of distance=%d\'-%.1f'",sum.feet,sum.inch);
	return 0;
}
