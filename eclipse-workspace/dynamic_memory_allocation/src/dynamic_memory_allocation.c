/*
 ============================================================================
 Name        : dynamic_memory_allocation.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


struct person
{
	char name[20];
	int age;
	struct person *next;
};

void enter_information(struct person *p)
{
	printf("Enter the name: ");
	scanf("%s", p->name);
	printf("Enter the age: ");
	scanf("%d", &p->age);
}

int main(void) {

	struct person *p = malloc(sizeof(struct person));
	p->next = NULL;
	enter_information(p);

	struct person *p2 = malloc(sizeof(struct person));
	p2->next = NULL;
	enter_information(p2);
	p->next = p2;

	struct person *p3 = malloc(sizeof(struct person));
	p3->next = NULL;
	enter_information(p3);
	p2->next = p3;

	struct person *a = p;
	while (a != NULL)
	{
		printf("Person's name is %s age is %d\n", a->name, a->age);
		a = a->next;
	}

	//free(p);


	while (1) {}

	return EXIT_SUCCESS;
}
