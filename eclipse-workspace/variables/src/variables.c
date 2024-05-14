/*
 ============================================================================
 Name        : variables.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/* Variable: An instruction to the compiler to reserve some memory for you to store a value. */
	int i = 0; /* declaring a new integer variable */
	short s = 15; /* declaring a new short variable (amount of bits of short < bits of integer) */
	long l = 60; /* declaring a new long variable (size of long >= size of integer) */
	char c = 'a'; /* declaring a new character variable (a single character can only store one byte) */

	float f = 1.2; /* declaring a new floating point variable */
	printf("%f %e %g size is %lu\n", f, f, f, sizeof(f));

	double d = 3.14; /* can store twice as many bits as a float */
	printf("%f %e %g size is %lu\n", d, d, d, sizeof(d));

	return EXIT_SUCCESS;
}
