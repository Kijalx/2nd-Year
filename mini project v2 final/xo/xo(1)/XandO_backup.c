//	ALEKSANDER KIJEWSKI
//	G00396018
//	01/11/2021

#define _USE_MATH_DEFINES
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int delay();
int board();
int winner();
char userinput[9] = { '1','2','3','4','5','6','7','8','9' };

int main()
{
	char name1[30], name2[30];
	int input;
	char player;

	printf("Please input player 1's name: ");
	gets(name1);
	printf("Player 1's name is: %s\n", name1);

	printf("Please input player 2's name: ");
	gets(name2);
	printf("Player 2's name is: %s\n", name2);
	delay(2);

	for (int timer = 3; timer > 0; timer--) {
		system("cls");
		printf("Game will begin in %i\n", timer);
		delay(1);
	}
	board();

	for (int i = 0; i <= 8; i++)
	{
		winner();
		if (i % 2 == 1) {
			player = 'X';
			printf("Player %s please choose a pace: ", name1);
			scanf("%i", &input);
		}
		else {
			player = 'O';
			printf("Player %s please choose a pace: ", name2);
			scanf("%i", &input);
		}
		if (input > 9 || input < 1)
		{
			printf("Invalid Entry Please pick a number between 1-9\n");
			delay(2);
			i--;
		}

		if (userinput[0] == '1' && input == 1) {
			userinput[0] = player;
		}
		else if (userinput[1] == '2' && input == 2) {
			userinput[1] = player;
		}
		else if (userinput[2] == '3' && input == 3) {
			userinput[2] = player;
		}
		else if (userinput[3] == '4' && input == 4) {
			userinput[3] = player;
		}
		else if (userinput[4] == '5' && input == 5) {
			userinput[4] = player;
		}
		else if (userinput[5] == '6' && input == 6) {
			userinput[5] = player;
		}
		else if (userinput[6] == '7' && input == 7) {
			userinput[6] = player;
		}
		else if (userinput[7] == '8' && input == 8) {
			userinput[7] = player;
		}
		else if (userinput[8] == '9' && input == 9) {
			userinput[8] = player;
		}

		board();
		winner();
		if (winner() == 1)
		{
			if (i % 2 == 1) {
				printf("Player %s WINS!! ", name1);
			}
			else {
				player = 'O';
				printf("Player %s WINS!!", name2);
			}
			return 0;
		}
		if (i == 8)
		{
			printf("Draw");
			return 0;
		}
	}
}
int board()
{
	system("cls");
	printf("     |     | \n");
	printf("  %c  |  %c  |  %c \n", userinput[0], userinput[1], userinput[2]);
	printf("_____|_____|_____\n");
	printf("     |     | \n");
	printf("  %c  |  %c  |  %c \n", userinput[3], userinput[4], userinput[5]);
	printf("_____|_____|_____\n");
	printf("     |     | \n");
	printf("  %c  |  %c  |  %c \n", userinput[6], userinput[7], userinput[8]);
	printf("     |     | \n\n");
}

int delay(int time) 
{
	int milli_seconds = 1000 * time;
	clock_t start_time = clock();
	while (clock() < start_time + milli_seconds);
}

int winner()
{
	if (userinput[0] == userinput[1] && userinput[1] == userinput[2])
	{
		return 1;
	}
	else if (userinput[3] == userinput[4] && userinput[4] == userinput[5])
	{
		return 1;
	}
	else if (userinput[6] == userinput[7] && userinput[7] == userinput[8])
	{
		return 1;
	}
	else if (userinput[0] == userinput[3] && userinput[3] == userinput[6])
	{
		return 1;
	}
	else if (userinput[1] == userinput[4] && userinput[4] == userinput[7])
	{
		return 1;
	}
	else if (userinput[2] == userinput[5] && userinput[5] == userinput[8])
	{
		return 1;
	}
	else if (userinput[0] == userinput[4] && userinput[4] == userinput[8])
	{
		return 1;
	}
	else if (userinput[2] == userinput[4] && userinput[4] == userinput[6])
	{
		return 1;
	}
}