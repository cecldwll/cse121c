/*
 ============================================================================
 Name        : pointers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// Passing Pointers to Functions
void add_five(int* a) {
	*a += 5;
}

int main(void) {
	// POINTERS: a variable that contains the address of another variable
	int a = 1;

	// pointer variable
//	int* p = NULL; // initialize pointers as null // p is a pointer to an integer
//	p = &a;
//
//	//dereferencing a pointer (looking at the address where the pointer is pointing to)
//	*p  = 3;
//
//	(*p)++;
//	(*p) += 9;

	add_five(&a);


	while (1) {}

	return EXIT_SUCCESS;
}
