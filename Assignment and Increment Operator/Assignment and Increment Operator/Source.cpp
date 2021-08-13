#include <iostream>
using namespace std;

int main()
{
	int x = 10;

	x += 5;
	x *= 5;
	x /= 5;
	x %= 5;

	cout << x << endl;
	cout << x++ << endl;
	cout << ++x << endl;
	cout << x << endl;

	cout << x << endl;
	cout << x-- << endl;
	cout << --x << endl;
	cout << x << endl;

}