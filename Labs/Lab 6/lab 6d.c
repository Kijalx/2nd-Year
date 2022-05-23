// Aleksander kijewski
// 26/10/2021
// Lab 6d

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
	int a[5] = {4,7,3,9,5};
    int temp, i, j;
	int* p = &a[0];

	printf("The array is:\n");
	for (i = 0; i < 5; i++) {
		printf("%d ", *(p+i));
	}
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (*(p + i) > * (p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
    printf("\nThe arranged array is:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    getchar();
    return 0;
}