/*
  Aleksander Kijewski
  G00396018
  06/12/2021
  RLC Final exam sem1
*/

#include <iostream>
#include "RLC.h"

using namespace std;

int main()
{
	int x;
	int R, L, f, C;
	Rlc r2;
	Rlc r3;
	// INPUT
	while (1)
	{
		cout << "How would you like to run this proramme\n1.Input your own parameters\n2.Parametarized parameters\n3.Defualt Parameters.\n";
		cin >> x;
		if (x == 1)
		{
			cout << "Enter the Resistance\n";
			cin >> R;
			cout << "Enter the Impedance\n";
			cin >> L;
			cout << "Enter the Capactitance\n";
			cin >> C;
			cout << "Enter the Frequency\n";
			cin >> f;
			r2.inputParams(R, L, C, f);
			r2.display();
		}
		else if (x == 2)
		{
			Rlc r1(10, 2, 100, 50);
			r1.display();
		}
		else if (x == 3)
		{
			r3.display();
		}
	}
}
