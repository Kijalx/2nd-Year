#include <iostream>
#include <fstream>     //Ofstream, Ifstream, fstream
#include <string>

using namespace std;

int main()
{
	// Write data to a text file

	ofstream myfile1("Lab6Demo.txt");

	cout << "Writing data to a file\n";
	if (myfile1.is_open())
	{
		myfile1 << "This is a line\n";
		myfile1 << "This is a second line\n";
	}
	else
	{
		cout << "Unable to open file\n";
	}

	myfile1.close();


	// Read data from a file
	string data;
	ifstream myfile2("Lab6Demo.txt");

	cout << "Reading data from a file\n";
	//cin>>data;
/*
	cout << "First read\n";
	myfile >> data;
	cout << "Data read from file is "<<data << endl;

	cout << "Second read\n";
	myfile >> data;
	cout << "Data read from file is " << data << endl;

	cout << "Third  read\n";
	myfile >> data;
	cout << "Data read from file is " << data << endl;  */


	// Use a while loop together with the getline() function to read the file line by line
	while (getline(myfile2, data))
	{
		cout << data;
	}

	myfile2.close();


	return 0;
}
