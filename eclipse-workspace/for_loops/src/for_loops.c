/*
 ============================================================================
 Name        : for_loops.c
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

	// for loop
	for(i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
	}

	// while loop
	i = 1;
	while (i <= 10)
	{
		printf("%d\n", i);
		i++;
	}


	while (1) {}

	return EXIT_SUCCESS;
}
