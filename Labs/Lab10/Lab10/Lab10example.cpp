#include <iostream>

using namespace std;

class Distance
{
private:
	int feet;
	float inch;
public:
	Distance() // Default Constructor
	{
		feet = 0;
		inch = 0;
	}
	Distance(int ft, float in) // Parameterised Constructor
	{
		feet = ft;
		inch = in;
	}
	void set(int f, float i) // Function to set the values of feet and inches
	{
		feet = f;
		inch = i;
	}
	void display()
	{
		cout << "\n Total feet & inches: " << feet << "     " << inch << endl;
	}
	Distance sum(Distance x)
	{
		Distance total;
		total.feet = x.feet + feet;
		total.inch = x.inch + inch;
		return (total);
	}

	Distance operator +(Distance c)
	{
		Distance tot;
		tot.feet = feet + c.feet;
		tot.inch = inch + c.inch;

		return (tot);
	}
	Distance operator -(Distance c)
	{
		Distance tot;
		tot.feet = feet - c.feet;
		tot.inch = inch - c.inch;

		return (tot);
	}
};

int main()
{
	Distance d1;
	Distance d2(4,6);
	Distance d3;
	
	d1.set(6, 7);

	d3 = d1.sum(d2);
	d3.display();

	d1.set(12, 13);
	d2.set(8, 14);
	d3 = d1 + d2;
	d3.display();

	d1.set(12, 13);
	d2.set(8, 14);
	d3 = d1 - d2;
	d3.display();
	return 0;
}