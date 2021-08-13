#include <iostream>
#include "sally.h"
using namespace std;

Sally::Sally(int a,int b)
	:regVar(a), constVar(b)
{

}


void Sally::print()
{
	cout << "regular var is:" << regVar << " const Variable is:" << constVar << endl;
}