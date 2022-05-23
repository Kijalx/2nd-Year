#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int r;
	srand((int)time(0));
	for (int i = 0; i < 50; i++)
	{
		r = (rand()%26)+25;
		printf("Random number: %i\n", r);
	}
	return 0;
}