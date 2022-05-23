#include <iostream>

using namespace std;

class football_Player
{
private:
	int gcode;
	string gname;
	int games, goals;
	float avg;
	int total = 0;

public:
	void readdata();
	float calcavg();
	void displaydata();
};

void football_Player::readdata()
{
	cout << "Please enter the players code: ";
	cin >> gcode;
	cout << "Please enter the players name: ";
	cin >> gname;
	cout << "Please enter the games played: ";
	cin >> games;
	if (games > 1)
	{
		for (int i = 1; i <= games; i++)
		{
			cout << "Enter the " << i << " game goals: ";
			cin >> goals;
			total = total + goals;
		}
	}
}
float football_Player::calcavg()
{
	avg = total / games;
	return avg;
}

void football_Player::displaydata()
{
	cout << "Player code: " << gcode << "\nPlayer name: " << gname << "\nGames Played: " << games << "\nAverage Goals for the player per game is: " << avg << endl;
}

int main()
{
	football_Player g1;
	g1.readdata();
	g1.calcavg();
	g1.displaydata();
	football_Player g2;
	g2.readdata();
	g2.calcavg();

	football_Player g3;
	g3.readdata();
	g3.calcavg();

	g1.displaydata();
	g2.displaydata();
	g3.displaydata();

}