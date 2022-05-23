#include<stdio.h>
#include<inttypes.h>

uint8_t num;

int main()
{
	printf("Enter any number: \n");
	scanf("%d", &num);

	if (num >> 7)
	{
		printf("MSB of %d is set (1)", num);
	}
	else
	{
		printf("MSB of %d is unset (0)", num);
	}
}