/*
  Aleksander Kijewski
  02/12/2021
  G00396018
  Queue C++ file
*/

/*Included files*/
#include <iostream>
#include "Queue.h"

using namespace std;

Queue::Queue()
{
	max = 5;
	que[max];
	front = -1;
	rear = -1;
}

Queue::Queue(int x)
{
	max = x;
	que[max];
	front = -1;
	rear = -1;
}

void Queue::user()
{
	cout << "Enter max queue" << endl;
	cin >> max;
	que[max];
	front = -1;
	rear = -1;
}

void Queue::addQ(int x)
{
	if (rear == max-1)
	{
		cout << "The queue is full" << endl;
	}
	else
	{
		rear++;
		que[rear] = x;
		cout << "Person with number " << x << " joined the queue" << endl;

	}
}

void Queue::remQ()
{
	if ((front-rear) == max-1)
	{
		cout << "Queue is empty" << endl;
	}
	else
	{
		int x;
		cout << "Which position would you like to remove" << endl;
		cin >> remove;
		remove = remove - 1;
		x = que[remove];
		cout << "Removed " << x << " from the queue" << endl;
		
		if (que[remove] > 0)
		{
			rear--;
		}
		que[remove] = 0;
	}
}

void Queue::isEmpty()
{
	if (rear < 0)
	{
		cout << "Queue is empty" << endl;
	}
	else
	{
		cout << "There is people in the queue" << endl;
	}
}
void Queue::isFull()
{
	if (rear >= (max - 1))
	{
		cout << "Queue is full" << endl;
	}
	else
	{
		cout << "Queue still has space" << endl;
	}
}
void Queue::peek()
{
	int x = 0;
	int y = 0;
	cout << "would you like to peak at the 1. First position\n OR \n2. Last position" << endl;
	cin >> x;
	if (x == 1)
	{
		cout << "The first number in queue is " << que[front] << endl;;

	}
	else if (x == 2)
	{
		cout << "The last number in the queue is" << que[rear] << endl;
	}
	else
	{
		cout << "Invalid choice" << endl;
	}
}

void Queue::disp()
{
	for (int x = 0; x < rear; x++)
	{
		if (que[x] == 0)
		{
			for (int i = 0; i <= rear; i++)
			{
				que[i] = que[i + 1];
			}
		}
	}
	for (int i = 0; i <= rear; i++)
	{
		cout << "\t" << i+1 << ". " << que[i];
	}
	cout << endl;
}