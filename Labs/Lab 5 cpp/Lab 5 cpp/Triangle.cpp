#include <iostream>
#include "Triangle.h"

using namespace std;

Triangle::Triangle()
{
	base = 10;
	height = 10;
}

Triangle::Triangle(float b, float h)
{
	base = b;
	height = h;
}

void Triangle::setDim()
{
	cout << "Please enter the base length" << endl;
	cin >> base;
	cout << "Please enter the height" << endl;
	cin >> height;
}
float Triangle::getArea()
{
	return(0.5 * base * height);
}
void Triangle::print()
{
	cout << "Area of triangle: " << getArea() << endl;
}