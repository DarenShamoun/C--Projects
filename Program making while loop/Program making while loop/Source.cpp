#include <iostream>
using namespace std;

int main()
{
	int x = 1;
	int number;
	int total = 0;

	while (x <= 5)
	{
		cin >> number;
		total = number + total;
		x++;
	}

	cout << "your totaL is " << total << endl;

	return 0;
}