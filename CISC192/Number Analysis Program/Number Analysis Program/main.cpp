// PC 7.7 - Number Analysis Program
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 05/06/2021
// ----------------------------------------------------------------------
// Asks the user for a file name and reads the files contents into   
// an array and displays the lowest, highest, total and average.
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// The prototypes for all of the functions required
int getNumbers(const string filename, int array[], int max);
int findLowest(const int numericArray[], int size);
int findHighest(const int numericArray[], int size);
int calcSum(const int numericArray[], int size);
int calcAverage(const int numericArray[], int size);
void displayInfo();


int main()
{
	// The maximum number of items in the array
	const int MAX_COUNT = 50;

	int numlist[MAX_COUNT];
	int count = 0;

	//Displays the program information that will display at 
	//the start of the program
	displayInfo();

	//sets the value of count to the number of items in the array
	//also assigns the values from the file into the array
	count = getNumbers("numbers.txt", numlist, MAX_COUNT);

	//displays all the final calculations
	cout << "   This program read " << count << " numbers. \n\n"
		<< "   Lowest: " << findLowest(numlist, count) << "\n"
		<< "   Highest: " << findHighest(numlist, count) << "\n"
		<< "   Sum: " << calcSum(numlist, count) << "\n"
		<< "   Average: " << calcAverage(numlist, count) << "\n\n";

	return 0;
}

int getNumbers(const string filename, int numericArray[], int max)
{
	ifstream inFile;
	int count = 0;
	int number;

	inFile.open(filename);

	//Checks if the file opens and if does not displays an error
	if (!inFile)
	{
		cout << "   Cannot open "
			"\"" << filename << "\".\n";
		return -1;
	}

	//assigns the values read from the file into the array
	//and tallies the counter
	while (inFile >> number && count < max)
	{
		numericArray[count] = number;
		count++;
	}

	inFile.close();

	return count;
}

// calculates the lowest values in the array
int findLowest(const int numericArray[], int size)
{
	int count;
	int lowest;
	lowest = numericArray[0];
	for (count = 1; count < size; count++)
	{
		if (numericArray[count] < lowest)
		{
			lowest = numericArray[count];
		}
	}
	return lowest;
}

//calculates the highest value in the array
int findHighest(const int numericArray[], int size)
{
	int count;
	int highest;
	highest = numericArray[0];
	for (count = 1; count < size; count++)
	{
		if (numericArray[count] > highest)
		{
			highest = numericArray[count];
		}
	}
	return highest;
}

//calculates the sum of all numbers in the array 
int calcSum(const int numericArray[], int size)
{
	int total = 0;
	for (int count = 0; count < size; count++)
	{
		total += numericArray[count];
	}
	return total;
}

//calculates the average of all numbers in the array
int calcAverage(const int numericArray[], int size)
{
	int average;
	int total = 0;
	int counter = 0;
	for (int count = 0; count < size; count++)
	{
		total += numericArray[count];
		counter++;
	}
	average = total / counter;
	return average;
	return 50;
}

//displays all the info about the program 
void displayInfo()
{
	cout << "   PC 7.7 - Number Analysis Program \n"
		<< "   -------------------------------- \n"
		<< "   This program will read the numbers from the"
		<< " \"numbers.txt\" \n"
		<< "   file and put the data into an array. From the array, \n"
		<< "   this program will determine the lowest number, highest \n"
		<< "   number, the sum of the numbers, and the average. \n\n";
}