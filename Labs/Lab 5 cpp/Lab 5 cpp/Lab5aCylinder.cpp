#include <iostream>
#include "Cylinder.h"
using namespace std;

int main()
{
	Cylinder c1; //Cylinder 1
	Cylinder c2(2, 3); //Cylinder 2
	Cylinder c3; //Cylinder 3

	c3.setDim(); //Prompts to set dimensions
	c1.print(); //Prints Cylinder 1
	c2.print(); //Prints Cylinder 2
	c3.print(); //Prints Cylinder 3
	return 0;
}