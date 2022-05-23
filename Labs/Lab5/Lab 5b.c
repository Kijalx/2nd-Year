// ALEKSANDER KIJEWSKI
// 19/10/2021
// LAB 5b
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30], s2[30], ch = ' ';
    int i;
    printf("Enter string: ");

    gets(s1);
    printf("string: %s", s1);

    for (i = 0; s1[i] != '\n'; i++)
    {
        s2[i] = s1[i];
    }

    s2[i] = '\0';

    puts(s2);
    printf("\nCopy string: %s", s2);

    return 0;
}
