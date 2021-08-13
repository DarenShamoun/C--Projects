#include <iostream>
using namespace std;

int main()
{
	int fish = 5;
	cout << &fish << endl;
	//  &  symbol is to point
	int *fishPointer;
	fishPointer = &fish;
	// the * is to indicate that you are making a pointer
	cout << fishPointer << endl;

}