#include <iostream>
using namespace std;

int main()
{
	char a;
	int b;
	double c;
	double bucky[10];

	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
	cout << sizeof(bucky) << endl;

	cout << sizeof(bucky) / sizeof(bucky[0]) << endl;
	//above is how to find the number of elements are in the array

}