#include <iostream>
using namespace std;

void printSomething();
//so this is a "prototype" and if you enter the function before you start you will not recieve any errors later on in the program

void printCrap(int x)
{
	cout << "buckys favorite number is " << x << endl;
}
//this is the other method of inserting a function into the main

int main()
{
	printSomething();
	
	printCrap(20);

	return 0;
}

void printSomething()
{
	cout << "This is a function printing this on the screen" << endl;
}
