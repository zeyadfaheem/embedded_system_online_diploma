/*
 ============================================================================
 Name        : 8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a, b;
	char o;
	printf ("enter operator either + or - or * or / :");
	scanf ("%c",&o);
	printf ("enter two number :");
	scanf ("%f %f",&a,&b);
	switch (o) {
	case '+' :
		printf ("%.1f + %.1f =%.1f",a,b, a+b);
		break;
		case '-' :
			printf ("%.1f - %.1f =%.1f",a,b, a-b);
			break;
		case '*' :
			printf ("%.1f * %.1f =%.1f",a,b, a*b);
			break;
		case '/' :
			printf ("%.1f / %.1f =%.1f",a,b, a/b);
			break;
		default :
			printf ("error!!! operator not correct");
	}


	return 0;
}
