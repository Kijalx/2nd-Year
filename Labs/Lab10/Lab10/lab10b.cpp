#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES
using namespace std;

class Quad
{
private:
	float a;
	float b;
	float c;
	float det;
	float sum1;
	float sum2;

public:
	Quad()
	{
		a = 0;
		b = 0;
		c = 0;
		sum1 = 0;
	}
	Quad(double x, double y, double z)
	{
		a = x;
		b = y;
		c = z;
	}
	void set(double x, double y, double z)
	{
		a = x;
		b = y;
		c = z;
	}
	Quad sum(Quad q)
	{
		Quad total;
		total.a = a + q.a;
		total.b = b + q.b;
		total.c = c + q.c;
		return (total);
	}
	Quad operator +(Quad q)
	{
		Quad tot;
		tot.a = a + q.a;
		tot.b = b + q.b;
		tot.c = c + q.c;
		return(tot);
	}
	Quad operator -(Quad q)
	{
		Quad tot;
		tot.a = a - q.a;
		tot.b = b - q.b;
		tot.c = c - q.c;

		return (tot);
	}
	float quadratic()
	{
		det = 4 * a * c;
		sum1 = ((b*-1) + ((b * b) - (det)*0.5)) / (2 * a);
		return (sum1);
	}
	void display()
	{
		cout << sum1 << endl;
	}
};

int main()
{
	Quad q1;
	q1.set(3, 4, 2);
	q1.quadratic();
	q1.display();
}