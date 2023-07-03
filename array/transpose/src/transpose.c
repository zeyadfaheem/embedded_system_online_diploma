/*
 ============================================================================
 Name        : transpose.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[9][9], trans[9][9], r, c, i, j;
		printf ("enter numbers of r and c of matrix: ");
		fflush (stdin); fflush (stdout);
		scanf ("%d%d",&r,&c);
		printf ("\nEnter the element of matrix: \n");
		for (i=0;i<r;++i)
			for (j=0;j<c;++j) {
				printf ("enter element a%d%d",i+1,j+1);
				fflush (stdin); fflush (stdout);
				scanf ("%d",&a[i][j]);
			}
		printf ("\nEnter the matrix: \n");
		for (i=0;i<r;++i)
			for (j=0;j<c;++j) {
				printf ("%d ",a[i][j]);
				if (j==c-1)
					printf ("\n\n");
			}
		for (i=0;i<r;++i)
			for (j=0;j<c;++j) {
				trans [j][i] = a [i][j];
			}
		printf ("\nTranspose of matrix: \n");
		for (i=0;i<c;++i)
			for (j=0;j<r;++j) {
					printf ("%d ",trans [i][j]);
					if (j==r-1)
						printf ("\n\n");
			}
		return 0;
}
