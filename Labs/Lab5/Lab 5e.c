// ALEKSANDER KIJEWSKI
// 19/10/2021
// LAB 5e
#include <stdio.h>
#include <string.h>

int main()
{
    char word[30];
    int i, alpha = 0, special = 0, digits = 0;

    printf("Enter a word: ");
    gets(word);

    for (i = 0; word[i] != '\0'; i++)
    {
        if (word[i] >= 65 && word[i] <= 90)
        {
            alpha++;
        }
        if (word[i] >= 97 && word[i] <= 122)
        {
            alpha++;
        }

        if (word[i] >= 33 && word[i] <= 47)
        {
            special++;
        }
        if (word[i] >= 48 && word[i] <= 57)
        {
            digits++;
        }
    }

    ;

    puts(word);
    printf("The word has %d alphabet letters\n", alpha);
    printf("The word has %d special characters\n", special);
    printf("The word has %d digits\n", digits);

    return 0;
}
