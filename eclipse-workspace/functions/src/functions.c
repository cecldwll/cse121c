/*
 ============================================================================
 Name        : functions.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fun(int i) {

	return i + 5;
}

void display(int i) {

	printf("The number is %d. \n", i);
	return;
}

int nully(void) { // no parameters
	return 15;
}

int main(void) {

	int i = 0;
	printf("Enter a number: ");
	scanf("%d", &i);

	int j = fun(i);
	display(i);
	display(j);

	int k = nully();
	display(k);

	// printf("The new number is %d\n", j);

	while (1) {}

	return EXIT_SUCCESS;
}
