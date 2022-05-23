#include<stdio.h>
#include<inttypes.h>

int main()
{
	char uinput, n, mask = 0x1;

	printf("enter any number");
	scanf("%c", &uinput);

	printf("Enter which bit you would like to change: ");
	scanf("%c", &n);

	mask <<= n;
	
	uinput |= mask;

	printf("The %c bit is set to %d", n, uinput);
}