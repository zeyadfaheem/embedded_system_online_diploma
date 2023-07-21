/*
 ============================================================================
 Name        : information.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct student {
	char name[50];
	int roll;
	float marks;
};
int main(void) {
	struct student a[10];
	int i;
	printf ("Enter information of student:\n");
	for (i=0;i<10;++i) {
		a[i].roll=i+1;
		printf ("\nFor roll number %d\n",a[i].roll);
		printf ("Enter name: ");
		fflush(stdin);fflush(stdout);
		scanf ("%s",&a[i].name);
		printf ("Enter marks: ");
		fflush(stdin);fflush(stdout);
		scanf ("%s",&a[i].marks);
	}
	printf ("Displaying information of student:\n");
	for (i=0;i<10;++i) {
		printf ("information for roll number %d:\n",i+1);
		printf ("Name: ",a[i].name);
		printf ("Marks: %.1f",a[i].marks);
	}
	return 0;
}

