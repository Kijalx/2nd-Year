#include <iostream>
#include "IntegerArray.h" //premade header file
using namespace std;

void Array::inputArray() //input func
{
	cout << "Input the number of elements: " << endl; //prompts user to enter amount of elements
	cin >> n; //takes in value
	for (int i = 0; i < n; i++)
	{
		cout << "Enter values for Array[" << i << "]: " << endl; //prompts
		cin >> input[i]; //takes in array values
	}
}
void Array::display() //display func
{
	for (int i = 0; i < n; i++)
	{
		cout << "Array[" << i << "] is " << input[i] << endl; //displays Array[]
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Copied array is: " << copied[i] << endl; //displays copied[]
	}
	cout << "Average for the array is: " << avg() << endl; //gets average and displays
}

void Array::copy()
{
	for (int i = 0; i < n; i++)
	{
		copied[i] = input[i]; //to copy array
	}
}
float Array::avg()
{
	for (int i = 0; i < n; i++)
	{
		average += input[i]; //adds items together
	}
	average /= n; //divides by number of elements

	return (average); //returns float
}