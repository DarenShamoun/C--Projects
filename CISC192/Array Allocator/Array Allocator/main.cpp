// PC 9.1 - Array Allocator
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 05/14/2021
// ----------------------------------------------------------------------
// This program takes user input and uses it to dynamically allocate
// an array of integers and display randomized numbers in the array.
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
#include <ctime>
using namespace std;

//function that creates the new dynamic array
int* make_array(int n);

int main()
{
	//declaring the pointer variable that will hold the address 
	//of the new array
	int* dynamicArray = nullptr;
	//n is the user input that will determine the size of the array
	int n;
	
	//in program description of what the program does
	//as well as instruction on what to enter
	cout << "   " << "This program makes an array of random numbers!\n";
	cout << "   " << "Enter a number between 1 and 10 to choose " 
		<< "the array's size: \n" << "   ";
	cin >> n;
	
	//creates an array with the make_array function and assigns 
	//the address to the dynamicArray variable
	dynamicArray = make_array(n);

	//assigns each value in the array a number 
	int accumulator = 1;
	for (int index = 0; index < n; index++)
	{
		dynamicArray[index] = accumulator++;
	}

	cout << "\n   " << "The randomized array's values are shown below: \n\n";

	//randomizes the value that is stored in each value of the array
	//and prints the values currently stored in the array
	srand(time(0));
	for (int index = 0; index < n; index++)
	{
		dynamicArray[index] += rand();
		cout << "   " << dynamicArray[index] << endl;
	}

	cout << endl;
	return 0;

}

//creates an array dynamically based on user input 
int* make_array(int n)
{
	int* newArray;
	newArray = new int[n];
	return newArray;
}