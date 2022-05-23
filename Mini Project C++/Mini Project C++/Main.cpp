/*
  Aleksander Kijewski
  02/12/2021
  G00396018
  Mini Project C++
*/
#include <iostream>
#include <time.h>
#include <math.h>
#include "Queue.h"
#include "Stack.h"


using namespace std;
/*	FUNCTION DECLARATION	*/
int menu();
void delay(float);
/*		MAIN PROGRAMME		*/
int main()
{
	/*Creation of variables*/
	int choice;
	int choice2 = 0;
	int x;

	Stack s;
	Stack s1(5);
	Queue q;
	Queue q1(5);
	while (1)													/*While loop to rerun the code*/
	{
		choice = menu();										/*Call Function*/
		if (choice == 1)										/*Choice for stack*/
		{
			choice = 0;
			cout << "Proceeding to Stack Demo." << endl;		/*Prints*/
			delay(1);											/*Delay*/
			system("cls");									/*Clears Screen*/
			cout << "Would you like to\n1. Set your own Variables.\n2. Default Variables (5)." << endl;
			cin >> choice;
			delay(0.5);
			system("cls");
			if (choice == 1)
			{
				s.user();
				delay(1);
				system("cls");
			}
			else if(choice == 2)
			{

			}
			else
			{
				cout << "invalid Choice" << endl;
				delay(1);
			}
			while (choice2 != -1)
			{
				choice2 = 0;
				cout << "Would you like to \n1. Push\n  or \n2. Pop?\n3. Peek\n4. isFull\n5. isEmpty\n(-1 to Quit)" << endl;
				cin >> choice2;
				if (choice2 == 1)
				{
					x = 0;
					cout << "Enter the number of pages in the book." << endl;
					cin >> x;
					s.push(x);
					delay(3);
					system("cls");
				}
				else if (choice2 == 2)
				{
					s.pop();
					delay(3);
					system("cls");
				}
				else if (choice2 == 3)
				{
					s.peek();
					delay(3);
					system("cls");
				}
				else if (choice2 == 4)
				{
					s.isFull();
					delay(3);
					system("cls");
				}
				else if (choice2 == 5)
				{
					s.isEmpty();
					delay(3);
					system("cls");
				}
			}
			
		}
		else if (choice == 2)									/*Choice for Queue*/
		{
			cout << "Proceeding to Queue Demo." << endl;		/*Prints*/
			delay(1);											/*Delay*/
			system("cls");							/*Clears Screen*/
			cout << "Would you like to\n1. Set your own Variables.\n2. Default Variables (5)." << endl;
			cin >> choice;
			delay(0.5);
			system("cls");
			if (choice == 1)
			{
				q.user();
				delay(1);
				system("cls");
			}
			else if (choice == 2)
			{

			}
			else
			{
				cout << "invalid Choice" << endl;
				delay(1);
			}
			while (choice2 != -1)
			{
				cout << "Please select one of these choices:\n1. Add to the queue\n2. Remove from the queue\n3. Is the queue Empty\n4. Is the queue full\n5. Peek into the queue" << endl;
				cin >> choice2;
				if (choice2 == 1)
				{
					x = 0;
					cout << "Enter the number of the person standing in queue" << endl;
					cin >> x;
					q.addQ(x);
					delay(3);
					system("cls");
				}
				else if (choice2 == 2)
				{
					q.disp();
					q.remQ();
					delay(3);
					system("cls");
				}
				else if (choice2 == 3)
				{
					q.isEmpty();
					delay(3);
					system("cls");
				}
				else if (choice2 == 4)
				{
					q.isFull();
					delay(3);
					system("cls");
				}
				else if (choice2 == 5)
				{
					q.peek();
					delay(3);
					system("cls");
				}
			}
		}
		else if (choice == 3)									/*Choice for Quit*/
		{
			cout << "Quitting.";								/*Prints*/
			delay(0.3);											/*Delay*/
			cout << ".";
			delay(0.3);
			cout << "." << endl;
			delay(1);
			system("cls");										/*Clears Screen*/
			return 0;											/*Closes Program*/
		}
		else													/*Invalid choice*/
		{
			cout << "Invalid choice" << endl;
			system("cls");
			delay(1);
		}
	}
}

/*		MENU		*/
int menu()
{
	/*Creation of variables*/
	int ui = 0;
	/*Prints Menu*/
	cout << "\tMenu\n" << endl;
	cout << "1. Stack Demo." << endl;
	cout << "2. Queue Demo." << endl;
	cout << "3. Quit." << endl;
	cin >> ui;													/*Takes in variable*/
	return (ui);												/*Returns value*/
}

/*Makeshift delay timer*/
void delay(float time)
{
	int milli_seconds = 1000 * time;							/*Gets the time given and changes it into miliseconds*/
	clock_t start_time = clock();								/*Activates clock from time.h file*/
	while (clock() < start_time + milli_seconds);				/*Doesnt exit the loop until the time is up*/
}