#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

int main()
{
	Birthday birthObj(9, 28, 97);

	People darenShamoun("Daren Shamoun", birthObj);
	darenShamoun.printInfo();
}