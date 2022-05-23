#include <iostream>
#include <fstream>     //Ofstream, Ifstream, fstream
#include <string>

using namespace std;

int main()
{
	ifstream fin;
	fin.open("first.txt");
	ofstream fout;
	fout.open("second.txt");
	char word[30];
	while (!fin.eof())
	{
		fin >> word;
		if (word[0] == 'a')
		{
			word[0] = 'A';
			fout << ' ' << word;
		}
		else if (word[0] == 'e')
		{
			word[0] = 'E';
			fout << ' ' << word;
		}
		else if (word[0] == 'i')
		{
			word[0] = 'I';
			fout << ' ' << word;
		}
		else if (word[0] == 'o')
		{
			word[0] = 'O';
			fout << ' ' << word;
		}
		else if (word[0] == 'u')
		{
			word[0] = 'U';
			fout << ' ' << word;
		}
		else
		{
			fout << ' ' << word;
		}
	}
	fin.close();
	fout.close();
}