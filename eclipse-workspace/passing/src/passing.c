/*
 ============================================================================
 Name        : passing.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

// passing by value and passing by reference

#include <stdio.h>
#include <stdlib.h>

typedef struct  value_t{
	int value_1;
	int value_2;
} value_t;


int function(value_t *value) {

	printf("The value before the change is %d %d\n", value->value_1, value->value_2);
	value->value_1 = 7;
	value->value_2 = 8;
	printf("The value after the change is %d %d\n", value->value_1, value->value_2);
	return 0;
}


int main(void) {
	value_t v;
	v.value_1 = 5;
	v.value_2 = 6;

	function(&v);

//	int a = 5;
//	a = 6;
//
//	int *p = &a;
//	printf("The value of a is now %d\n", a);
//
//	*p = 4;
//	printf("The value of a is now %d\n", a);
//
//	function(&a);

	while (1) {}

	return EXIT_SUCCESS;
}
