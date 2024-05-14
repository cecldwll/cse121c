/*
 ============================================================================
 Name        : structures.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



// STRUCTURE: a variable that can store more than one value inside of it

typedef struct bank {
	char name[15];
	int account;
	float balance;
} bank_t; // '_t' indicates its a type


int main(void) {

	bank_t b = { "Harry", 1, 1.27 };
//	b.account = 1;
//	b.balance = 1.27;
//	b.name[0] = 'H';
//	b.name[1] = 'a';
//	b.name[2] = 'r';
//	b.name[3] = 'r';
//	b.name[4] = 'y';
//	b.name[5] = 0;

	printf("Account %d balance %g name %s\n", b.account, b.balance, b.name);

	while (1) {}

	return EXIT_SUCCESS;
}
