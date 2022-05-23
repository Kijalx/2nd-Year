//	Aleksander Kijewski
//	G00396018
//	02/11/2021

#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	std::cout << "Hello World\n";	//	printf statement but in c++

	std::cout << "Goodbye\n";	//	std::cout is used if 'using namespace std' is not in the prefix

	cout << "Hello World\n";	//	can use cout if 'using namespace std' is in the prefix
	*/
	int x = 10;
	
	int age, year;
	string mystring, mystring2; // how to create strings
	
	cout << x;	//	How to print ints
	cout << "\nThe value of x is: " << x << "\n";	// Multi cout using a string and int
	
	//	How to accept ints // or std::cin
	cout << "Please enter your age and year of birth: ";
	cin >> age >> year;
	cout << "Your age is: " << age << "\nAnd your year of birth is: " << year;
	
	//	how to accept a string
	cout << "\nPlease enter your name: ";
	cin >> mystring;
	cout << "Your name is: " << mystring;
	
	//	How to accept a line (like first and second name)
	cout << "\nWhat is your full name?\n";
	getline(cin, mystring);
	cout << "Your full name is: " << mystring2;
	
	cout << "Whats your favourite subject?\n";
	getline(cin, mystring);
	cout << "Your favourite subject is: " << mystring2;

	cout << "-" << x << "-";
	return 0;
}