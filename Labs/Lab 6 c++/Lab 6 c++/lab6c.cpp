#include <iostream>
#include <fstream>     //Ofstream, Ifstream, fstream
#include <string>

using namespace std;

int main()
{
	int i;
	int space = 0;
	string word, word1;
	// Writing data to file
	ofstream myfile3("lab6_3.txt");
	
	cout << "Please write what you would like in your word document\n";
	getline(cin, word);

	if (myfile3.is_open())
	{
		myfile3 << word;
	}
	else
	{
		cout << "Unable to open file\n";
	}
	myfile3.close();

	ifstream infile;
	infile.open("Lab6_3.txt");

	cout << "Reading from file" << endl;
	infile >> word1;

	while (!infile.eof())
	{
		infile >> word1;
		space++;
	}
	cout << "There is " << space+1 << " words.";
}