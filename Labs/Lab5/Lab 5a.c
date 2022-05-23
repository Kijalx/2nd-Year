// ALEKSANDER KIJEWSKI
// 19/10/2021
// LAB 5e
#include <stdio.h>
#include <string.h>

int main()
{
    // Initlialising int and chars
    char length[30], ch = ' ';
    int i = 0;
    printf("Enter a string: ");

    while (ch != '\n')    // Stops as soon as you hit enter
    {
        ch = getchar(); //gets character
        length[i] = ch; 
        i++;
    }

    length[i] = '\0';       // inserts null
    printf("\nLength of the string is: %d", i - 1);

    return 0;
}