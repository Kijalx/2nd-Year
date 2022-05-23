#include<stdio.h>
#include<math.h>
float num, square;
int main()
{
	printf("Please enter a number you would like the square root of: ");
	scanf("%f", &num);
	square = sqrt(num);
	printf("%.2f", square);
}