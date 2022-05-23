// Aleksander kijewski
// 26/10/2021
// Lab 6c

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
	// Declaring arrays interger
	int a[5] = { 5,4,6,8,9 };
	int b[5] = { 2,3,5,1,4 };
	int c[5];
	int i = 0;
	// Declaring pointer
	int* p = &a[0];
	int* p2 = &b[0];
	int* p3 = &c[0];

	system("cls");

	printf("\n");

	for (i = 0; i < 5; i++)
	{
		*(p3 + i) = *(p + i) + *(p2 + i);
	}
	for (i = 0; i < 5; i++)
		printf("%d\n", *(p3+i));
	

	getchar();

	return(0);
}
