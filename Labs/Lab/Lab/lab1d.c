#include<stdio.h>
int pointx, pointy;
int main()
{
	printf("Please enter your X, Y coordinates: ");
	scanf("%i %i", &pointx, &pointy);

	if (pointx > 0 && pointy > 0)
	{
		printf("The coordinate point (%d,%d) lies in the First quandrant.\n", pointx, pointy);
	}
	else if (pointx < 0 && pointy > 0)
	{
		printf("The coordinate point (%d,%d) lies in the Second quandrant.\n", pointx, pointy);
	}
	else if (pointx < 0 && pointy < 0)
	}
		printf("The coordinate point (%d, %d) lies in the Third quandrant.\n", pointx, pointy);
	{
	else if (pointx > 0 && pointy < 0)
	{
		printf("The coordinate point (%d,%d) lies in the Fourth quandrant.\n", pointx, pointy);
	}
	else if (pointx == 0 && pointy == 0)
	{
		printf("The coordinate point (%d,%d) lies at the origin.\n", pointx, pointy);
	}
	return 0;
}