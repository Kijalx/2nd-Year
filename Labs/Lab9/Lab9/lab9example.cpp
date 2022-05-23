#include <iostream>

using namespace std;

class Circle
{
private:
	double radius;
	string colour;

public:
	void setRadius(double r)
	{
		radius = r;
	}
	Circle();				// declare a default constructor.
	Circle(double, string);	// declare a parameterised constructor.
	~Circle();				// declare a destructor
	void setColour();
	double getArea();
	string getColour();
};
Circle::Circle()
{
	radius = 1.0;
	colour = "green";
	cout << "Default constructor called \n\n";
}

Circle::Circle(double r, string c)
{
	radius = r;
	colour = c;
	cout << "Parameterised Constructor called\n\n";
}

Circle::~Circle()
{
	cout << "Destructor Called\n\n";
}

void Circle::setColour()
{
	cout << "Please enter a colour for your circle: ";
	cin >> colour;
}

double Circle::getArea()
{
	return(3.14 * radius * radius);
}

string Circle::getColour()
{
	return (colour);
}

int main()
{
	//Create an object / instance
	Circle c1;
	Circle c2(3, "red");

	//c1.setRadius(2.5);
	//c1.setColour();
	
	cout << "Area of circle 1 of colour " << c1.getColour() << " = " << c1.getArea() << endl;
	cout << "Area of circle 2 of colour " << c2.getColour() << " = " << c2.getArea() << endl;

	return 0;
}