/*
 ============================================================================
 Name        : Class Average Program.c
 Author      : Me
 Version     :
 Copyright   : Your copyright notice
 Description : Class average calculator in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// Turn off the output buffering
	setvbuf(stdout, NULL, _IONBF, 0);

	// Define and initialize variables
	int grade;
	float average;
	int total = 0;
	unsigned int counter = 0;

	char buffer[BUFSIZ]; // Space for the user to type in the grades as a string of characters

	// Get first grade from user
	printf("Enter your grades (-1 to end): ");
	grade = atoi(fgets(buffer, BUFSIZ, stdin));

	while (grade != -1) { // While loop with sentinel value
		total += grade;
		counter++;
		printf("\nEnter your grades (-1 to end): ");
		grade = atoi(fgets(buffer, BUFSIZ, stdin));
	}

	if (counter != 0) {
		average = (float) total / counter;
		printf("\nThe average of your grades is: %.2f", average);
	} else
		printf("\nNo grades were entered");

	return EXIT_SUCCESS;

}
