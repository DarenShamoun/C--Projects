#pragma once
#include "Birthday.h"
#include <string>
using namespace std;

class People
{
public:
	People(string x, Birthday bo);
	void printInfo();
private:
	string name;
	Birthday dateOfBirth;
};

