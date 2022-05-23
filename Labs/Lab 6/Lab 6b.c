// Aleksander kijewski
// 26/10/2021
// Lab 6b

#include <stdio.h>

int main(void)
{
	// Initialising variables
	int x = 3, y = 4, z = 6;
	// Initialising pointers
	int* p1, * p2, * p3;
	// Assigning pointers
	p1 = &x; // p1 is = location of x
	p2 = &y; // p2 is = location of y
	p3 = &z; // p3 is = location of z
	*p1 = *p2 + *p3; // p1 is equal to p2 plus p3 // x = y + z = 10
	*p1+=1; // p1/x gets incrimented by 1 = 11
	*p2-=1; // p2/y decreases by 1 = 3
	*p1 = (*p2) * (*p3); // p1 = 3 * 6 = 18
	*p2 = (*p2) * (*p1); // p2 = 3 * 18 = 54
	x = y + z; // x = 54 + 7 = 60
	printf("Value of x : %d\n", x); // prints 60
	printf("Value of y : %d\n", y); // prints 54
	printf("Value of z %d\n", z); // prints 6
	printf("Value at pointer P1: %d\n", *p1); // prints x
	printf("Value at pointer P2: %d\n", *p2); // prints y
	printf("Value at pointer P3: %d\n", *p3); // prints z

	return 0;
}
