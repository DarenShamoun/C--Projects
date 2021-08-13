#include <iostream>

using namespace std;

int main()
{
	int a = 78;
	int b = 100;
	
	if (6 > 4)
	{
		cout << "yes 6 is greater than 4!" << endl;
	}

	if (b == a)
	{
		cout << "yes b is equal to a" << endl;
	}

	if (b >= a)
	{
		cout << "yes b is greater than or equal to a" << endl;
	}

	if (b <= a)
	{
		cout << "no b is not less than or equal to a" << endl;
	}

	if (a != b)
	{
		cout << "no a is not equal to b" << endl;
	}

	return 0;
}