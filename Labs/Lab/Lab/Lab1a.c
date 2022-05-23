#include<stdio.h>
int hours, minutes, total, htm;
int main()
{
	printf("Enter hours: ");
	scanf("%i", &hours);
	if (hours <= 24) 
	
		printf("Enter minutes: ");
		scanf("%i", &minutes);
		if (minutes <= 60)
		{
			htm = hours * 60;
			total = minutes + htm;
			printf("the total in minutes is %i", total);
		}
		else
		{
			printf("Enter a valid number for hours (60)");
		}
	
	else
	{
		printf("enter a valid number for hours (24)");
	}

}