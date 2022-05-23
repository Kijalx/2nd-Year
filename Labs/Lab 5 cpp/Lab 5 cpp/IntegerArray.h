#pragma once

// Array class
class Array
{
private:
	int n;
	float average = 0;
	int input[100]; //array
	int copied[100]; //array
public:
	void inputArray();
	void copy();
	float avg();
	void display();
};