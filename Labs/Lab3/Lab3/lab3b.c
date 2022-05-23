#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int total = 0, r;
	srand((int)time(0));
	for (int i = 0; i < 6; i++)
	{
		r = (rand() % 6) + 1;
		printf("Random number: %i\n", r);
		total = r + total;
	}
	printf("Total is: %i", total);
}