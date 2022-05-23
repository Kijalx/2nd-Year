//Definition
#define _USE_MATH_DEFINES
//Included Files
#include <iostream>
#include "Cylinder.h"
#include <math.h>

using namespace std;

Cylinder::Cylinder() //Default constructor
{
	radius = 5;
	height = 10;
}

Cylinder::Cylinder(float r, float h) //Parametariserd constructor
{
	radius = r;
	height = h;
}

void Cylinder::setDim() //User sets dimensions
{
	cout << "Please enter the radius" << endl;
	cin >> radius; //Takes in Values
	cout << "Please enter the height" << endl;
	cin >> height; //Takes in height
}

float Cylinder::getArea()
{
	return(2*M_PI*radius*height+2*M_PI*(radius*radius)); //Calculates Value for Area
}

float Cylinder::getVol()
{
	return (M_PI * (radius * radius) * height); //Calculates value for Volume 
}

void Cylinder::print() 
{
	cout << "Area of Triangle is: " << getArea() << endl;    //Prints Area
	cout << "Volume of Triangle is: " << getVol() << endl;	 //Prints Volume
}