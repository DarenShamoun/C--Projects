#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

Birthday::Birthday(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}

void Birthday::printDate()
{
	cout << month << "/" << day << "/" << year << endl;
}