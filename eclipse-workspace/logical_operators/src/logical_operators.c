/*
 ============================================================================
 Name        : logical_operators.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i = 0;
	int j = 1;

	printf("The and operation: %d\n", i && j);
	printf("The or operation: %d\n", i || j);
	printf("The first not operation: %d\n", !i);
	printf("The second not operation: %d\n", !j);

	printf("The equality operator is: %d\n", i == j);
	printf("The not equal operator is: %d\n", i != j);

	printf("The less than operator is: %d\n", i < j);
	printf("The less than or equal to operator is: %d\n", i <= j);
	printf("The greater than operator is: %d\n", i > j);
	printf("The greater than or equal to operator is: %d\n", i >= j);


	while (1) {}

	return EXIT_SUCCESS;
}
