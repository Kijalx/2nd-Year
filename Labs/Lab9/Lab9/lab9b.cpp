#include <iostream>

using namespace std;


class Area
{
public:
	Area(int, int);
	int returnArea();
	int enterArea();

private:
	int length;
	int breadth;
	float total;
};

Area::Area(int x, int y)
{
	length = x;
	breadth = y;
}

int Area::returnArea()
{
	total = length * breadth;

	return total;
}

int main()
{
	int a, b;
	cout << "Please enter length: ";
	cin >> a;
	cout << "Please enter breadth: ";
	cin >> b;
	Area t1(a,b);
	cout << "Total Area is: " << t1.returnArea();
}