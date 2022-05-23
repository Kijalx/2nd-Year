/*
  Aleksander Kijewski
  02/12/2021
  G00396018
  Stack H file
*/
#pragma once

class Queue
{
private:
	int rear;
	int remove;
	int front;
	int max;
	int que[0];
public:
	Queue();
	Queue(int);
	void user();
	void addQ(int);
	void remQ();
	void isEmpty();
	void isFull();
	void peek();
	void disp();
};