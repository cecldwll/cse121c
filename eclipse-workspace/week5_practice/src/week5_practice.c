/*
 ============================================================================
 Name        : week5_practice.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the bank structure
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

    printf("Enter the name for the account: ");
    scanf("%s", acc->name);

    printf("Enter the balance: ");
    scanf("%f", &acc->bal);
}

// Function to display information about one account
void display(const struct bank *acc) {
    printf("Account number: %d  name: %s  balance: $%.2f\n", acc->acc_num, acc->name, acc->bal);
}

// Function to display all records in the list
void display_all(const struct bank *head) {
    const struct bank *current = head;

    while (current != NULL) {
        display(current);
        current = current->next;
    }
}

// Function to add a new account to the list
void add_account(struct bank **head) {
    struct bank *new_account = malloc(sizeof(struct bank));
    if (new_account == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    // Input details for the account
    input(new_account);
    new_account->next = NULL;

    // Link the new account to the list
    if (*head == NULL) {
        *head = new_account;
    } else {
        struct bank *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_account;
    }
}

// Function to find an account by its number
struct bank *find_account(struct bank *head, int acc_num) {
    struct bank *current = head;
    while (current != NULL) {
        if (current->acc_num == acc_num) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

// Function to update an account's information
void update_account(struct bank *head) {
    int acc_num;
    printf("Enter the account number to find: ");
    scanf("%d", &acc_num);

    struct bank *account = find_account(head, acc_num);
    if (account != NULL) {
        printf("Found account: ");
        display(account);
        printf("Now enter the new account information.\n");
        input(account);
    } else {
        printf("Account not found.\n");
    }
}

// Main function to drive the program
int main(void) {
    struct bank *head = NULL; // Pointer to the first bank record
    int choice;

    // Menu system
    do {
        printf("\nMain menu:\n");
        printf("  1. Add account\n");
        printf("  2. Display all accounts\n");
        printf("  3. Find account\n");
        printf("  4. Change account\n");
        printf("  0. Quit program\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_account(&head);
                break;
            case 2:
                display_all(head);
                break;
            case 3: {
                int acc_num;
                printf("Enter the account number to find: ");
                scanf("%d", &acc_num);
                struct bank *account = find_account(head, acc_num);
                if (account != NULL) {
                    printf("Found account: ");
                    display(account);
                } else {
                    printf("Account not found.\n");
                }
                break;
            }
            case 4:
                update_account(head);
                break;
            case 0:
                printf("Quitting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    // Free allocated memory
    struct bank *current = head;
    while (current != NULL) {
        struct bank *temp = current;
        current = current->next;
        free(temp);
    }

    return EXIT_SUCCESS;
}


