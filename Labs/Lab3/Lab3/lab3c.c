#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int r, i, y;
	srand((int)time(0));
	r = (rand() % 32) + 1;
	y = userguess(r);
	if (y == 1)
	{
		printf("You win.");
	}
	else 
	{
		printf("You lose.");
	}
	return 0;
}
int userguess(int r)
{
	int guess, correct_answer;
	correct_answer = r;
	for (int i = 0; i < 5; i++)
	{
		printf("Please enter your guess: ");
		scanf("%i", &guess);
		if (guess == correct_answer) {
			printf("You're right.\n");
			return 1;
		}
		else if (guess > correct_answer) {
			printf("\nToo high.\n");
		}
		else {
			printf("\nToo low.\n");
		}
	}
	printf("\nAnswer was: %i.", correct_answer);
	return 0;
}