/*
  Aleksander Kijewski
  02/12/2021
  G00396018
  Stack C++ file
*/

/*Included files*/
#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack()
{
	max = 5;
	stk[5];
	top = -1;
}

Stack::Stack(int x)				/*Paramaterized constructor*/
{
	max = x;
	stk[max];
	top = -1;
}

void Stack::user()
{
	cout << "Enter your stack maximum amount.\n";
	cin >> x;
	max = x;
	stk[max];
	top = -1;
}

void Stack::push(int x)
{
	if (top >= (max-1))
	{
		cout << "You cannot place any more books" << endl;
	}
	else
	{
		top++;
		stk[top] = x;
		cout << "The book with " << x << " amount of pages was moved onto the stack" << endl;
	}
}

void Stack::pop()
{
	if (top < 0)
	{
		cout << "Stack has no more books." << endl;
	}
	else
	{
		int x = stk[top--];
		cout << "Removed " << x << " from the stack." << endl;
	}
}

void Stack::peek()
{
	if (top == -1)
	{
		cout << "No books here to look at" << endl;
	}
	else
	{
		int x = stk[top];
		cout << "Peeking...\nNumber on top is " << x << endl;
	}
}

void Stack::isEmpty()
{
	if (top < 0)
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		cout << "There is still books in the stack" << endl;
	}
}

void Stack::isFull()
{
	if (top >= (max-1))
	{
		cout << "Stack is Full" << endl;
	}
	else
	{
		cout << "Stack is not full" << endl;
	}
}