//Aleksander Kijewski
//G00396018
//09/11/2021
#include<iostream>
using namespace std;

class Sample
{
private:
    int x;
    double y;
public:
    Sample(); //Constructor 1
    Sample(int); //Constructor 2
    Sample(int, int); //Constructor 3
    Sample(int, double); //Constructor 4
    int getValuesx();
    double getValuesy();
};

Sample::Sample()
{
    x = 0;
    y = 0;
}
Sample::Sample(int a)
{
    x = a;
    y = 0;
}

Sample::Sample(int a, int b)
{
    x = a;
    y = b;
}

Sample::Sample(int a, double b)
{
    x = a;
    y = b;
}

int Sample::getValuesx()
{
    return x;
}
double Sample::getValuesy()
{
    return y;
}
int main()
{
    Sample s1;
    Sample s2(5);
    Sample s3(2, 4);
    Sample s4(3, 6.5);
    cout << "X is: " << s1.getValuesx() << endl << "Y is: " << s1.getValuesy() << endl;
    cout << "X is : "<< s2.getValuesx() << endl << "Y is: " << s2.getValuesy() << endl;
    cout << "X is: " << s3.getValuesx() << endl << "Y is: " << s3.getValuesy() << endl;
    cout << "X is: " << s4.getValuesx() << endl << "Y is: " << s4.getValuesy() << endl;
}