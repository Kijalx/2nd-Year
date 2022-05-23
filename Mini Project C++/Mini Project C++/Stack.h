/*
  Aleksander Kijewski
  02/12/2021
  G00396018
  Stack H file
*/
#pragma once

class Stack
{
private:
	int x;
	int top;
	int max;
	int stk[0];
public:
	Stack();
	Stack(int);
	void user();
	void push(int);
	void pop();
	void peek();
	void isEmpty();
	void isFull();
};
