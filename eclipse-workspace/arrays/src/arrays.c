/*
 ============================================================================
 Name        : arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[5];

	a[0] = 6;
	a[1] = 34;
	a[2] = 668;
	a[3] = 1129;
	a[4] = 342;

	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);


	char name[15] = "Harry";

	printf("The name is %s\n", name);

	return EXIT_SUCCESS;
}
