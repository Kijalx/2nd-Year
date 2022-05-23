//	Aleksander Kijewski
//	G00396018
//	02/11/2021

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b, temp;
	cout << "Enter 2 digits you would like to swap: ";
	cin >> a >> b;
	temp = a;
	a = b;
	b = temp;
	cout << "\nYour first digit swapped is: " << a;
	cout << "\nYour second digit swapped is: " << b;

}