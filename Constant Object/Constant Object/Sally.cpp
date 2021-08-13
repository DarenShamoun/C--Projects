#include <iostream>
#include "Sally.h"
using namespace std;

Sally::Sally()
{

}

void Sally::printShiz()
{
	cout << "I am a regular function";
}

void Sally::printShiz2() const
{
	cout << "I am the constant function" << endl;
}