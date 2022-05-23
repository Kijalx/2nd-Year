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

void Stack::user(int x)
{
	max = x;
	stk[max];
	top = -1;
}

bool Stack::push(int x)
{
	if (top >= (max-1))
	{
		cout << "You cannot place any more books" << endl;
		return false;
	}
	else
	{
		stk[++top] = x;
		cout << "The book with " << x << " amount of pages was moved onto the stack" << endl;
		return true;
	}
}

int Stack::pop()
{
	if (top < 0)
	{
		cout << "Stack has no more books." << endl;
		return 0;
	}
	else
	{
		int x = stk[top--];
		return x;
	}
}

int Stack::peek()
{
	if (top < 0)
	{
		cout << "No books here to look at" << endl;
		return 0;
	}
	else
	{
		int x = stk[top--];
		return x;
	}
}

bool Stack::isEmpty()
{
	return (top < 0);
}