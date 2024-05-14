/*
 ============================================================================
 Name        : week3_practice.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void addThree(int a) {
	a += 3; // modify parameter
	printf("The new value is %d\n", a); // print out new value
}

void dereferenceOperator(int* b) {
	*b += 3; // using dereference operator, add 3
	printf("The new value is %d\n", *b); // print out new value
}

int main(void) {
	int valuea;

	printf("Enter an integer: ");
	scanf("%d", &valuea); // ask the user for a value

	addThree(valuea); // pass value through function

	printf("Original value: %d\n", valuea); // verify og variable unchanged


	int valueb;

	printf("Enter an integer: ");
	scanf("%d", &valueb);

	dereferenceOperator(&valueb);

	printf("Original value: %d\n", valueb); // verify og was changed

	return EXIT_SUCCESS;
}
