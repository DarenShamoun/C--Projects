#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a; //this is the amount after returns 
	float principle = 10000;
	float rate = 0.03;

	for (int day = 1; day <= 30; day++)
	{
		a = principle * pow(1 + rate, day);
		cout << day << "----" << a << endl;
	}
}