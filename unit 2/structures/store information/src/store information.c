/*
 ============================================================================
 Name        : store.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct student {
	char name[60];
	int roll;
	float mark;
};
int main(void) {
	struct student a;
	printf ("Enter information of student:\n");
	printf ("Enter student name: ");
	fflush(stdin);fflush(stdout);
	scanf ("%s",&a.name);
	printf ("Enter student name: ");
	fflush(stdin);fflush(stdout);
	scanf ("%d",&a.roll);
	printf ("Enter student name: ");
	fflush(stdin);fflush(stdout);
	scanf ("%f",&a.mark);
	printf ("\nDisplaying information:\n");
	printf ("Name: %s\n",a.name);
	printf ("roll: %d\n",a.roll);
	printf ("mark: %f\n",a.mark);
	return 0;
}
