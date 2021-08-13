#include <iostream>
using namespace std;

void printArray(int theArray[], int sizeOfArray);

int main()
{
	int bucky[3] = { 20,32,42334 };
	int jessica[6] = { 23,86,1232,9123,123,1231 };

	printArray(jessica, 6);
}

void printArray(int theArray[], int sizeOfArray)
{
	for (int x = 0; x < sizeOfArray; x++)
	{
		cout << theArray[x] << endl;
	}
}