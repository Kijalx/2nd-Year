#include <iostream>
#include "Triangle.h"
using namespace std;
int main()
{
	Triangle t1;
	Triangle t2(2, 3);
	Triangle t3;
	
	t3.setDim();
	t1.print();
	t2.print();
	t3.print();

	return 0;
}