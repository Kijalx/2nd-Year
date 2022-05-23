#include<stdio.h>
#include<inttypes.h>

int main()
{
    char input, n;
    char mask = 0x1;

    printf("Enter any number: ");
    scanf("%c", &input);

    printf("Enter which bit you would like to change: ");
    scanf("%c", &n);

    mask <<= 0;

    if (input |= mask)
    {
        printf("The %d bit is set to %d", n, input);
    }
    else
    {
        printf("f");
    }
    return 0;
}