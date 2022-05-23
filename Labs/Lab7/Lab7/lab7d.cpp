//	Aleksander Kijewski
//	G00396018
//	02/11/2021

#include <iostream>
#include <string>


using namespace std;

int main()
{
	float cel, fah;

	cout << "Converter from celcius to Fahrenheit\n" << "-----------------------------------------" << "\nEnter the temperature in Celsius: ";
	cin >> cel;
	fah = (cel * 1.8) + 32;
	cout << "Fahrenheit: " << fah;
}