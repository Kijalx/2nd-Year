#include<stdio.h>
int sum;
int a;
int i=0;
int main()
{
	for (i = 0; i <= 10; i++)
	{
		sum = i + sum;
	}
	printf("The sum of the first 10 natural numbers is %i", sum);
	return 0;
}