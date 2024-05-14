/*
 ============================================================================
 Name        : week4_practice.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct bank {
    int acc_num;
    char name[20];
    float bal;
    struct bank *next; // Pointer to the next bank record
};

// Function to input information about one account
void input(struct bank *acc) {
    printf("Enter account number: ");
    scanf("%d", &acc->acc_num);

    printf("Enter the name of the account: ");
    scanf("%s", acc->name);

    printf("Enter the balance in the account: ");
    scanf("%f", &acc->bal);
}

// Function to display information about one account
void display(const struct bank *acc) {
    printf("\nAccount information: number %d name %s balance $%.2f\n", acc->acc_num, acc->name, acc->bal);
}

// Function to display all records in the list
void display_all(const struct bank *head) {
    const struct bank *current = head;

    while (current != NULL) {
        display(current);
        current = current->next;
    }
}

int main(void) {
    struct bank *head = NULL; // Pointer to the first bank record

    // Allocate memory for three bank records
    for (int i = 0; i < 3; i++) {
        struct bank *new_account = malloc(sizeof(struct bank));
        if (new_account == NULL) {
            printf("Memory allocation failed.\n");
            return EXIT_FAILURE;
        }

        // Input details for the account
        input(new_account);
        new_account->next = NULL;

        // Link the records together
        if (head == NULL) {
            head = new_account;
        } else {
            struct bank *current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = new_account;
        }
    }

    // Display all records
    display_all(head);

    // Free allocated memory
    struct bank *current = head;
    while (current != NULL) {
        struct bank *temp = current;
        current = current->next;
        free(temp);
    }

    return EXIT_SUCCESS;
}
