#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//time(0) is the clock that comes with <ctime> and inputs the clock time, which changes per second
	//srand(67); // this seeds in a new number into the "random" number generator
	
	srand(time(0));

	for (int x = 1; x < 25; x++)
	{
		cout << 1 + (rand()%6) << endl;
	}
}