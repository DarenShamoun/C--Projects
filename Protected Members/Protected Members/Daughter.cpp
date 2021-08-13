#include <iostream>
#include "Daughter.h"
#include "Mother.h"
using namespace std;

void Daughter::doSomething()
{
	publicv = 1;
	protectedv = 2;
	privatev = 3; // error is here because you can inherit everythign besides private class information
}
