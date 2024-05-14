/*
 ============================================================================
 Name        : pointers_to_structures.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


struct person {
	char name[20];
	int age;
};


int main(void) {

	struct person harry = { "Harry", 11 };

	struct person * george = NULL;
	george = &harry;
	george->age++;



	while (1) {}

	return EXIT_SUCCESS;
}
