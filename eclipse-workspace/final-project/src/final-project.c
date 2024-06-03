/*
 ============================================================================
 Name        : final-project.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constants for maximum description length and date length
#define MAX_DESC 100
#define DATE_LEN 11

// Define the Task structure
typedef struct Task {
    char description[MAX_DESC]; // Task description
    char due_date[DATE_LEN];    // Due date in YYYY-MM-DD format
    struct Task* next;          // Pointer to the next task in the list
} Task;

// Head of the linked list
Task* head = NULL;

// Function to add a new task
void addTask(const char* description, const char* due_date) {
    // Allocate memory for the new task
    Task* new_task = (Task*)malloc(sizeof(Task));
    if (!new_task) {
        printf("Memory allocation failed!\n");
        return;
    }
    // Copy description and due date to the new task
    strncpy(new_task->description, description, MAX_DESC);
    strncpy(new_task->due_date, due_date, DATE_LEN);
    // Insert the new task at the beginning of the list
    new_task->next = head;
    head = new_task;
}

// Function to remove a task by description
void removeTask(const char* description) {
    Task* temp = head;
    Task* prev = NULL;

    // Traverse the list to find the task to remove
    while (temp != NULL && strcmp(temp->description, description) != 0) {
        prev = temp;
        temp = temp->next;
    }

    // If the task was not found, print a message and return
    if (temp == NULL) {
        printf("Task not found!\n");
        return;
    }

    // Remove the task from the list
    if (prev == NULL) {
        head = temp->next;
    } else {
        prev->next = temp->next;
    }

    // Free the memory allocated for the task
    free(temp);
}

// Function to display all tasks
void displayTasks() {
    Task* temp = head;
    // Traverse the list and print each task
    while (temp != NULL) {
        printf("Task: %s, Due Date: %s\n", temp->description, temp->due_date);
        temp = temp->next;
    }
}

// Function to save tasks to a file
void saveTasksToFile(const char* filename) {
    FILE* file = fopen(filename, "w");
    if (!file) {
        printf("Unable to open file for writing!\n");
        return;
    }

    Task* temp = head;
    // Traverse the list and write each task to the file
    while (temp != NULL) {
        fprintf(file, "%s\n%s\n", temp->description, temp->due_date);
        temp = temp->next;
    }

    // Close the file
    fclose(file);
}

// Function to load tasks from a file
void loadTasksFromFile(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (!file) {
        printf("Unable to open file for reading!\n");
        return;
    }

    char description[MAX_DESC];
    char due_date[DATE_LEN];

    // Read tasks from the file and add them to the list
    while (fscanf(file, "%99[^\n]\n%10[^\n]\n", description, due_date) == 2) {
        addTask(description, due_date);
    }

    // Close the file
    fclose(file);
}

int main() {
    // Load tasks from the file at the start
    loadTasksFromFile("tasks.txt");

    int choice;
    char description[MAX_DESC];
    char due_date[DATE_LEN];

    // Main loop to interact with the user
    do {
        // Display menu options
        printf("1. Add Task\n2. Remove Task\n3. Display Tasks\n4. Save Tasks\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // Consume newline character

        switch (choice) {
            case 1:
                // Prompt user to enter task description
                printf("Enter task description: ");
                fgets(description, MAX_DESC, stdin);
                description[strcspn(description, "\n")] = 0;  // Remove newline character

                // Prompt user to enter due date
                printf("Enter due date (YYYY-MM-DD): ");

                fgets(due_date, DATE_LEN, stdin);
                due_date[strcspn(due_date, "\n")] = 0;  // Remove newline character

                // Add the new task
                addTask(description, due_date);
                break;
            case 2:
                // Prompt user to enter task description to remove
                printf("Enter task description to remove: ");
                fgets(description, MAX_DESC, stdin);
                description[strcspn(description, "\n")] = 0;  // Remove newline character

                // Remove the specified task
                removeTask(description);
                break;
            case 3:
                // Display all tasks
                displayTasks();
                break;
            case 4:
                // Save tasks to the file
                saveTasksToFile("tasks.txt");
                break;
            case 5:
                // Save tasks to the file before exiting
                saveTasksToFile("tasks.txt");
                printf("Exiting...\n");
                break;
            default:
                // Handle invalid menu option
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while (choice != 5);  // Continue until user chooses to exit

    return 0;
}

