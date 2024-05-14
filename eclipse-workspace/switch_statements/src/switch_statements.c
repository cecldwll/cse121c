/*
 ============================================================================
 Name        : switch_statements.c
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

	printf("Menu options:\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Division\n");
	printf("4. Multiplication\n");

	printf("Enter your choice: ");
	scanf("%d", &i);

	switch(i)
	{
	case 1:
		printf("Addition is easy.\n");
		break;
	case 2:
		printf("Subtraction is sublime.\n");
		break;
	case 3:
		printf("Division is dicey.\n");
		break;
	case 4:
		printf("Multiplication is messy.\n");
		break;
	default:
		printf("Sorry, try again.\n");
		break;
	}

	while (1) {}


	return EXIT_SUCCESS;
}
