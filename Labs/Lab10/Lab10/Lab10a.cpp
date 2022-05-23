#include <iostream>

using namespace std;

class Complex
{
private:
	float complexx;
	float complexy;
	float eq;

public:
	Complex()
	{
		complexx = 0;
		complexy = 0;
	}
	Complex(float f, float g)
	{
		complexx = f;
		complexy = g;
	}
	void set(float a, float b)
	{
		complexx = a;
		complexy = b;
	}
	Complex sum(Complex x)
	{
		Complex total;
		total.complexx = x.complexx + complexx;
		total.complexy = x.complexy + complexy;
		return (total);
	}
	Complex operator +(Complex c)
	{
		Complex tot;
		tot.complexx = complexx + c.complexx;
		tot.complexy = complexy + c.complexy;
		
		return(tot);
	}
	Complex operator -(Complex c)
	{
		Complex tot;
		tot.complexx = complexx - c.complexx;
		tot.complexy = complexy - c.complexy;

		return (tot);
	}

	Complex operator *(Complex c)
	{
		Complex tot;
		tot.complexx = complexx * c.complexx;
		tot.complexy = complexy * c.complexy;

		return (tot);
	}

	void disp()
	{
		if (complexx < 0 && complexy < 0)
		{
			eq = complexx + complexy;
			cout << "The complex number is " << eq << "i" << endl;
		}
		else if(complexx < 0)
		{
			cout << "The complex number is " << complexy << "  " << complexx << "i" << endl;
		}
		else if (complexy < 0)
		{
			cout << "The complex number is " << complexx << "  " << complexy << "i" << endl;
		}
		else if (complexx > 0 && complexy > 0)
		{
			cout << "The complex number is " << complexx << "  " << complexy << endl;
		}
	}
	bool operator ==(Complex c)
	{
		Complex tot;

		if (complexx == c.complexx && complexy == c.complexy)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
};

int main()
{
	Complex c1;
	Complex c2(-5,5);
	Complex c3;
	c1.set(5, 5);

	c3 = c1 + c2;
	c3.disp();

	c3 = c1 * c2;
	c3.disp();
	if (c1 == c2)
	{
		cout << "The numbers are equal" << endl;
	}
	else
	{
		cout << "The numbers are not equal" << endl;
	}
}