/*
 ============================================================================
 Name        : 2_practice.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct bank { // Define a struct for bank account information
	int acc_num;
	char name[20];
	float bal;
};

void input(struct bank *acc) { // Function to input information about one account
    printf("Enter account number: ");
    scanf("%d", &acc->acc_num);

    printf("Enter the name of the account: ");
    scanf("%s", acc->name);

    printf("Enter the balance in the account: ");
    scanf("%f", &acc->bal);
}

void display(const struct bank *acc){ // Function to display information about one account
//    printf("Account number: %d\n", acc->acc_num);
//    printf("Name: %s\n", acc->name);
//    printf("Balance: $%.2f\n", acc->bal);

    printf("\nAccount information: number %d name %s balance $%.2f\n", acc->acc_num, acc->name, acc->bal);
}


int main(void) {
	struct bank account;

	input(&account);

	display(&account);

	return EXIT_SUCCESS;
}
