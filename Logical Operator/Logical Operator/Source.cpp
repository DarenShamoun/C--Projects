#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int age = 13;
	int money = 650;

	//if (age > 21)
	//{
	//	if (money > 500)
	//	{
	//		cout << "you are allowed in" << endl;
	//	}
 	//} ineffecient and confusing after a point

	if (age > 21 && money > 500) // this && is the "and" logical operator
	{
		cout << "you are allowed in" << endl;
	}
	else
	{
		cout << " you are not allowed in" << endl;
	}

	if (age > 21 || money > 500) // this || is the "or" logical operator
	{
		cout << "you are allowed in" << endl;
	}
	else
	{
		cout << " you are not allowed in" << endl;
	}
}