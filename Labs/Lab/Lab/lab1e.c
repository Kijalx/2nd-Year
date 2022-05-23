#include<stdio.h>
char ch;
int main()
{
	printf("Please enter a character, digit or a special character:");
	scanf("%c", &ch);

	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		printf("%c is a character", ch);
	}
	else if (ch >= '1' && ch <= '9')
	{
		printf("%c is a number", ch);
	}
	else
	{
		printf("%c is a special charachter", ch);
	}
}