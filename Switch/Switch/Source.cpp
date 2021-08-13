#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int age = 21;
	
	switch (age)
	{
	case 16:
		cout << "hey you can drive now" << endl;
		break;
	case 18:
		cout << "go buy some lotto tickets" << endl;
		break;
	case 21:
		cout << "hey buy me some beer" << endl;
		break;
	default:
		cout << "sorry you get nothing" << endl;
	}




}