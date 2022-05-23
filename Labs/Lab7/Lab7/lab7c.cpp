//	Aleksander Kijewski
//	G00396018
//	02/11/2021

#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	float radius, area, circum;

	cout << "Please enter the radius of the circle: ";
	cin >> radius;

	area = M_PI * pow(radius, 2);
	cout << "The area of the circle is: " << area;

	circum = 2 * M_PI * radius;
	cout << "\nThe circumference of the circle: " << circum;
}