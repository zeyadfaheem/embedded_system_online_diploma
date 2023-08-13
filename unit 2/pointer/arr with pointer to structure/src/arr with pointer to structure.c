/*
 ============================================================================
 Name        : arr.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct employee {
	char* name;
	int* Id;
	};
int main(void) {
	static struct employee emp1= {"John",1001}, emp2= {"Alex",1002}, emp3= {"Taylor",1003};
	struct employee (*arr[])={&emp1,&emp2,&emp3};
	struct employee (*(*pt)[3])=&arr;
	printf ("Employee name: %s\n ",(**(*pt+1)).name);
	printf ("(**(*pt+1)).name\n");
	printf ("=(**(*&arr+1)).name");
	printf ("=(**(arr+1)).name");
	printf ("=(8arr[1]).name");
	printf ("=(*&emp2).name");
	printf ("=emp2.name= Alex");
	printf ("Employee Id: %d",(*(*pt+1))->Id));
	printf ("(*(*pt+1))-> Id");
	printf ("=(**(*pt+1)).Id");
	printf ("emp2.Id= 1002");

	return 0;
}
