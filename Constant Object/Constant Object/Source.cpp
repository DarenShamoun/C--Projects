#include <iostream>
#include "Sally.h"
using namespace std;

int main()
{
	const int x = 3;
// use "const" as a prefix to make a variable constant

	Sally salObj;
	salObj.printShiz();
// the normal way to use an object

	const Sally constObj;
	constObj.printShiz2();
//wehen you make an object a constant you must declare it constant in the header and in the class file as well
	
}