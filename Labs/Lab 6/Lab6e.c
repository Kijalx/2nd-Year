// Aleksander kijewski
// 26/10/2021
// Lab 6c
#include <stdio.h>

int inchestofeet(int*, int*); //initializes the function

int main()
{
	// initializes ints
	int x = 0, y = 0;
	// takes in inches
	printf("Enter in inches:\n");
	scanf("%d", &x);

	printf("Before calculation\ninches = %d\n", x);

	inchestofeet(&x, &y);

	printf("After calculation\nFeet: %d\nInches = %d\n", x, y);

	return 0;
}

int inchestofeet(int* a, int* b)
{
	int leftinches, feet;
	// Get feet
	feet = *a / 12;
	// Get remainder
	leftinches = (*a % 12);
	*a = feet;
	*b = leftinches;
}