#include <iostream>
#include <fstream>     //Ofstream, Ifstream, fstream
#include <string>

using namespace std;

int main()
{
	int i;
	// Writing data to file
	ofstream myfile1("Lab6_1.txt");

	cout << "Writing data to file\n" << endl;

	if (myfile1.is_open())
	{
		for (i = 1; i <= 100; i++)
		{
			myfile1 << i << " ";
			if (i % 10 == 0)
			{
				myfile1 << "\n";
			}
		}
	}
	else
	{
		cout << "Unable to open file\n";
	}
}