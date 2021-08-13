#include <iostream>
using namespace std;

void printNumber(int x)
{
	cout << "i am printing and integer x" << x << endl;
}

void printNumber(float x)
{
	cout << "now i am printing a float" << x << endl;
}

int main()
{
	int a = 54;
	float b = 32.4896;

	printNumber(a);
	printNumber(b);

}