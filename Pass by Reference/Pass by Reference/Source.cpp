#include <iostream>
using namespace std;

void passByReference(int* x);
void passByValue(int x);

int main()
{
	int betty = 13;
	int sandy = 13;

	passByValue(betty);
	passByReference(&sandy);

	cout << "betty is now " << betty << endl;
	cout << "sandy is now " << sandy << endl;
}

void passByValue(int x)
{
	x = 99;
	//this function only changes the value of the passed in copy of the variable and does not change it outside the void
}

void passByReference(int *x)
{
	*x = 66;
	// this function changes the value of the variable at its memory adress so it can change it from anywhere
}