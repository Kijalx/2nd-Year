/*
  Aleksander Kijewski
  G00396018
  06/12/2021
  RLC Final exam sem1
*/
#include <iostream>
#include "RLC.h"
#include <math.h>
#include <cmath>
#include <fstream>
#define _USE_MATH_DEFINES

#define M_PI 3.14
using namespace std;

Rlc::Rlc() 
{
	res = 10;
	ind = 2;
	cap = 100;
	freq = 50;
}

Rlc::Rlc(int R, int L, int C, int f)
{
	res = R;
	ind = L;
	cap = C;
	freq = f;
}

void Rlc::inputParams(int R, int L, int C, int f)
{
	res = R;
	ind = L;
	cap = C;
	freq = f;

}

float Rlc::indReact()
{
	float x;
	x = (2) * (M_PI) * (freq) * (ind);
	return (x);
}

float Rlc::capReact()
{
	float x;
	x = (1) / ((2) * (M_PI) * (freq) * (cap));
	return (x);
}

float Rlc::impedance()
{
	float x;
	x = sqrt((pow(res, 2)) + (indReact() - capReact()));
	return (x);
}

float Rlc::resFreq()
{
	float x;
	x = (1) / ((2) * (M_PI) * (sqrt(ind + cap)));
	return (x);
}

void Rlc::display()
{
	cout << "R\tL\tC\tf\tReact\t\tcapReact\t\timpedance\tresFreq" << endl;
	cout << res << "\t" << ind << "\t" << cap << "\t" << freq << "\t" << indReact() << "\t\t" << capReact() << "\t\t" << impedance() << "\t\t" << resFreq() << endl;
	int i;
	// Writing data to file
	ofstream myfile("final.txt");

	cout << "Writing data to file\n" << endl;

	if (myfile.is_open())
	{
		myfile << "R\tL\tC\tf\tReact\t\tcapReact\t\timpedance\tresFreq" << endl;
		myfile << res << "\t" << ind << "\t" << cap << "\t" << freq << "\t" << indReact() << "\t\t" << capReact() << "\t\t" << impedance() << "\t\t" << resFreq() << endl;
	}
	else
	{
		cout << "Unable to open file\n";
	}
}