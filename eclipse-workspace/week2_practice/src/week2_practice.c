#include <stdio.h>
#include <stdlib.h>

void partOne() {
    // part 1: switch statements and loops
    int i = -1;

    printf("Store options: \n");
    printf("1. Apples\n");
    printf("2. Oranges\n");
    printf("3. Bananas\n");
    printf("4. Grapes\n");
    printf("5. Watermelon\n");

    while (i != 0)
    {
        printf("\nEnter your choice (enter 0 when done): ");
        scanf("%d", &i);

        switch(i)
        {
            case 0:
                break;
            case 1:
                printf("Apples - $2.00 (per pound).\n");
                break;
            case 2:
                printf("Oranges - $1.50 (per pound).\n");
                break;
            case 3:
                printf("Bananas - $0.50. (per pound)\n");
                break;
            case 4:
                printf("Grapes - $2.50. (per pound)\n");
                break;
            case 5:
                printf("Watermelon - $7.50.\n");
                break;
            default:
                printf("Sorry, try again.\n");
                break;
        }
    }
}

void partTwo() {
    // part 2: loop counts up
    int num = 1;
    printf("\nLoops Counts Up\n");
    while (num <= 10)
    {
        printf("%d\n", num);
        num++;
    }
}

void partThree() {
	// part 3: loop counts down
	int num = 10;
	printf("\nLoop Counts Down\n");
	while (num >= 1)
	{
		printf("%d\n", num);
		num--;
	}

}

void partFour() {
	// part 4: create array and loop
	float numbers[10];
	float sum = 0;
	float min, max;

	printf("\nEnter 10 numbers:\n");
	for (int i = 0; i < 10; i++) {
		printf("Enter value: ");
		scanf("%f", &numbers[i]);
		sum += numbers[i];

		if (i == 0 || numbers[i] < min) {
			min = numbers[i];
		}
		if (i == 0 || numbers[i] > max) {
			max = numbers[i];
		}
	}

	float average = sum / 10;

	printf("\nMinimum value: %.2f\n", min);
	printf("Maximum value: %.2f\n", max);
	printf("Average value: %.2f\n", average);

}

int minimum(int i, int j) {
	// part 5: minimum function
    int min;
    if (i <= j) {
        min = i;
    } else {
        min = j;
    }
    return min;
}


int main(void) {
    partOne();  // Call part one function
    partTwo();  // Call part two function
    partThree(); // Call part three function
    partFour(); // Call part four function

    // Call part five function
	int i, j;
	printf("\nEnter a number (integer): ");
	scanf("%d", &i);
	printf("Enter another number (integer): ");
	scanf("%d", &j);
	printf("Between the two, the minimum value is %d.\n", minimum(i, j));

    return EXIT_SUCCESS;
}
