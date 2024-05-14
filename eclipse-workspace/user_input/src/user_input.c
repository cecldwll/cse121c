/*
 ============================================================================
 Name        : user_input.c
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
	long l = 0;
	unsigned int u = 0;
	char c = 0;

	printf("Enter a number: ");
	scanf("%d", &i);
	printf("The value is now %d\n", i);

	printf("Enter a very big number: ");
	scanf("%ld", &l);
	printf("The value is now %ld\n", l);

	printf("Enter an unsigned number: ");
	scanf("%u", &u);
	printf("The value is now %u\n", u);

	printf("Enter a character: ");
	scanf(" %c", &c);
	printf("The value is now %c (%d)\n", c, c);


	char name[15];
	printf("Enter the name: ");
	scanf("%s", name);
	printf("The value is now %s\n", name);

	while (1) {}

	return EXIT_SUCCESS;
}
