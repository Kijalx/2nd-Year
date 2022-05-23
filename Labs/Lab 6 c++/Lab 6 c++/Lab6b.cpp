#include <iostream>
#include <fstream>     //Ofstream, Ifstream, fstream
#include <string>

using namespace std;

int main()
{
	int i;
	string comp = "#include <iostream>
#include <fstream>     //Ofstream, Ifstream, fstream
#include <string>

		using namespace std;

	int main()
	{
		cout >> "Hello";
	}";
	// Writing data to file
	ofstream myfile2("Lab6_2.txt");

	cout << "Writing data to file\n" << endl;

	if (myfile2.is_open())
	{
		myfile2 << comp;
	}
	else
	{
		cout << "Unable to open file\n";
	}
}