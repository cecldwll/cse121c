/*
 ============================================================================
 Name        : arithmetic.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a = 5;
	int b = 8;
	int c = 15;
	int d = 31;

	printf("Sum of %d and %d is %d\n", b, c, b + c);
	printf("Product of %d and %d is %d\n", d, a, d * a);
	printf("Difference of %d and %d is %d\n", d, b, d - b);
	printf("Division of %d and %d is %d\n", d, c, d / c);
	printf("Remainder of %d and %d is %d\n", d, c, d % c);


	++a;
	--b;
	c--;
	d++;

	printf("a is now %d\n", a);
	printf("b is now %d\n", b);
	printf("c is now %d\n", c);
	printf("d is now %d\n", d);

	a += 5;

	printf("a is now %d\n", a);

	// other assignment operators:
	// -=
	// /=
	// *=
	// %=

	while (1) {}

	return EXIT_SUCCESS;
}
