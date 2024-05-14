/*
 ============================================================================
 Name        : week1_practice.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	// INTEGER
	int i = 0; // declare an integer variable
	printf("Enter a number: ");
	scanf("%d", &i); // ask user to input value
	printf("Value: %d\n", i); // return the value

	// FLOAT
	float f = 0.0; // declare a floating point variable
	printf("Enter a number with a decimal: ");
	scanf("%f", &f); // ask user to input value
	printf("Value: %f %e %g\n", f, f, f); //return the value

	// CHARACTER ARRAY
	char name[15]; // declare a character array
	printf("Enter your first name: ");
	scanf("%s", name); // ask user to input a string
	printf("String: %s\n", name); // return the string

	// IF/ELSE
	int j = 0; // declare integer variables
	int k = 0;
	printf("Enter a number: "); //ask user to input value
	scanf("%d", &j);
	printf("Enter a number: "); //ask user to input value
	scanf("%d", &k);
	if (j < k) // find minimum
	{
		printf("The smallest number is: %d\n", j); //return minimum
	}
	else
	{
		printf("The smallest number is: %d\n", k); //return minimum
	}


	return EXIT_SUCCESS;
}
