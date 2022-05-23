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
int computer();
int winner(int*);
char userinput[9] = { '1','2','3','4','5','6','7','8','9' };

int main()
{
	char name1[30];
	char name2[30];
	char name3[30];
	int input;
	int win, pvn;
	char player;
	printf("Press 1 if youd like to play against a computer\nPress 2 if you would like to play against another player\n");
	scanf("%i", &pvn);

	if (pvn == 2) {

		printf("Please input player 1's name: ");
		getchar();
		gets(name1);
		printf("Player 1's name is: %s\n", name1);


		printf("Please input player 2's name: ");
		gets(name2);
		printf("Player 2's name is: %s\n", name2);
		delay(1);
	}
	else if(pvn == 1) {
		printf("Please input players name: ");
		getchar();
		gets(name3);
		printf("Players name is: %s\n", name3);
	}
	system("cls");
	printf("The Game will begin shortly");
	delay(3);

	board();

	for (int i = 0; i <= 8; i++)
	{
		if (pvn == 2) 
		{
			if (i % 2 == 1) 
			{
				player = 'X';
				printf("Player %s please choose a pace: ", name2);
				scanf("%i", &input);
			}
			else 
			{
				player = 'O';
				printf("Player %s please choose a pace: ", name1);
				scanf("%i", &input);
			}
		}
		else if(pvn == 1)
		{
			if (i % 2 == 1)
			{
				player = 'O';
				printf("Player %s please choose a pace: ", name3);
				scanf("%i", &input);
			}
			else
			{
				player = 'X';
				computer(&input);
			}
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
		else {
			printf("Place is taken please try again");
			delay(1);
			i--;
		}

		board();

		winner(&win);
		if (pvn == 2) {
			if (win == 1)
			{
				if (i % 2 == 1) {
					printf("Player %s WINS!! ", name2);
				}
				else {
					printf("Player %s WINS!!", name1);
				}
				return 0;
			}
		}
		else if (pvn == 1)
		{
			if (win == 1)
			{
				if (i % 2 == 1) {
					printf("Player %s WINS!! ", name3);
				}
				else {
					printf("Computer WINS!!");
				}
				return 0;
			}
		}
		if (i == 8)
		{
			printf("Draw");
			return 0;
		}
	}
	return 0;
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
	return 0;
}

int delay(int time) 
{
	int milli_seconds = 1000 * time;
	clock_t start_time = clock();
	while (clock() < start_time + milli_seconds);
	return 0;
}

int winner(int* ifwin)
{
	if (userinput[0] == userinput[1] && userinput[1] == userinput[2])
	{
		*ifwin = 1;
	}
	else if (userinput[3] == userinput[4] && userinput[4] == userinput[5])
	{
		*ifwin = 1;
	}
	else if (userinput[6] == userinput[7] && userinput[7] == userinput[8])
	{
		*ifwin = 1;
	}
	else if (userinput[0] == userinput[3] && userinput[3] == userinput[6])
	{
		*ifwin = 1;
	}
	else if (userinput[1] == userinput[4] && userinput[4] == userinput[7])
	{
		*ifwin = 1;
	}
	else if (userinput[2] == userinput[5] && userinput[5] == userinput[8])
	{
		*ifwin = 1;
	}
	else if (userinput[0] == userinput[4] && userinput[4] == userinput[8])
	{
		*ifwin = 1;
	}
	else if (userinput[2] == userinput[4] && userinput[4] == userinput[6])
	{
		*ifwin = 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int computer(int* cchoice)
{
	srand((int)time(0));
	*cchoice = (rand() % 9) + 1;
	return cchoice;
}