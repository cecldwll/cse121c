/*
 ============================================================================
 Name        : function_prototypes.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int addTwoNumbers(int num1, int num2);

int main(void) {
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	int sum = addTwoNumbers(a, b);
	printf("The sum is %d\n", sum);


	return EXIT_SUCCESS;
}

int addTwoNumbers(int num1, int num2) {

	return num1 + num2;
}
