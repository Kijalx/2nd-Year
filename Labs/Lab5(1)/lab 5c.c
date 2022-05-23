// ALEKSANDER KIJEWSKI
// 19/10/2021
// LAB 5c
#include <stdio.h>
#include <string.h>

int main()
{
    //variables
    char w[30], w1[30], wTotal[30];
    int i, j;
    printf("Enter first word: ");
    gets(w);

    printf("Enter seconds word:");
    gets(w1);

    printf("The words concatenate together is:\n");


    for (i = 0; w[i] != '\0'; i++)
    {
        wTotal[i] = w[i];
    }

    wTotal[i] = ' ';
    i++;

    for (j = 0; w1[j] != '\0'; i++, j++)
    {
        wTotal[i] = w1[j];
    }

    wTotal[i] = '\0';

    puts(wTotal);

    return 0;
}
