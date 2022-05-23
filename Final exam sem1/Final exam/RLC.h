/*
  Aleksander Kijewski
  G00396018
  06/12/2021
  RLC Final exam sem1
*/

class Rlc
{
private:
	int res;
	int ind;
	int cap;
	int freq;
public:
	Rlc();
	Rlc(int, int, int, int);
	void inputParams(int, int, int, int);
	float indReact();
	float capReact();
	float impedance();
	float resFreq();
	void display();
	Rlc operator +(Rlc x)
	{
		Rlc total;
		total.res = res + x.res;
		total.ind = ind + x.ind;
		total.cap = cap + x.cap;
		total.freq = freq + x.freq;
		return (total);
	}
	Rlc operator *(Rlc x)
	{
		Rlc total;
		total.res = res * x.res;
		total.ind = ind * x.ind;
		total.cap = cap * x.cap;
		total.freq = freq * x.freq;
	
		return (total);
	}

	Rlc operator ^(Rlc x)
	{
		Rlc total;
		total.res = res ^ x.res;
		total.ind = ind ^ x.ind;
		total.cap = cap ^ x.cap;
		total.freq = freq ^ x.freq;

		return (total);
	}

};