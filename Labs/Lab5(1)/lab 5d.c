// ALEKSANDER KIJEWSKI
// 19/10/2021
// LAB 5d
#include <stdio.h>
#include <string.h>

int main()
{
    char w[30], lowerCase[30];
    int i;
    printf("Enter a word in Uppercase: ");
    gets(w);

    printf("That word in lower case is:\n");

    for (i = 0; w[i] != '\0'; i++)
    {
        lowerCase[i] = w[i] + 32; //changes letters to +32 in integer because it = lowercase
    }

    lowerCase[i] = '\0';

    puts(lowerCase);

    return 0;
}
