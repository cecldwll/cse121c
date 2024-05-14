/*
 ============================================================================
 Name        : if_else_statements.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i = 5;
	int j = 3;

	if (i < j)
	{
		// executed when i is less than j
		printf("%d is less than %d\n", i, j);
	}
	else if (j >4)
	{
		// executed when i is not less than j
		printf("%d is greater than 4\n", j);
	}
	else if (i < 2)
	{
		printf("%d is less than 2\n", i);
		if (j > 2)
		{
			printf("%d is greater than 2\n", j);
		}
		else
		{
			printf("%d is not greater than2\n", j);
		}
	}

	while (1) {}

	return EXIT_SUCCESS;
}
