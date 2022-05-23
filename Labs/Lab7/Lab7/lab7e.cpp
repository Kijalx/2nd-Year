//	Aleksander Kijewski
//	G00396018
//	02/11/2021

#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	char word[30];
	int i, alpha = 0, special = 0, digits = 0;
	cout << "Enter a word\n";
	cin >> word;


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
    printf("The word has %d alphabet letters\n", alpha);
    printf("The word has %d special characters\n", special);
    printf("The word has %d digits\n", digits);
    return 0;

}