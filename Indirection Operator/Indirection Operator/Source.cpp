#include <iostream>
#include "Sally.h"
using namespace std;

int main()
{
	Sally sallyObject;
	// must create a sallyObject to access the sally class
	sallyObject.printCrap();

	Sally* sallyPointer = &sallyObject;
	sallyPointer->printCrap();
	//this method is accessing the object with a pointer and instead of the "." it uses "->" to point at what it wants to access

}