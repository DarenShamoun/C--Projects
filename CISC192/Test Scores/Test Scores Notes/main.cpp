// PC 9.2 - Test Scores Notes
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 05/14/2021
// ----------------------------------------------------------------------
// This program takes a user entered number of test scores and sorts
// them from highest to lowest and calculates the average score.
// it then displays the sorted scores and the average.
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
using namespace std;

void displayInfo();
int getUserInput();
int* makeArray(int size);
void fillArray(int* dynamicArray, int size);
void selectionSort(int* dynamicArray, int size);
int caclulateAverage(int* dynamicArray, int size);
void displayScores(int* dynamicArray, int size, int average);

int main()
{
	int* dynamicArray = nullptr;
	int size;
    int average;

    displayInfo();

    size = getUserInput();

	dynamicArray = makeArray(size);

    fillArray(dynamicArray, size);

    selectionSort(dynamicArray, size);

    average = caclulateAverage(dynamicArray, size);

    displayScores(dynamicArray, size, average);

    return 0;
}

//displays the header of the program
void displayInfo()
{
    cout << "   " << "This program sorts test scores from"
        " highest to lowest!\n\n";
    cout << "   " << "Enter the amount of test scores to process: \n"
         << "   ";
}

//accepts integer input form the user
int getUserInput()
{
    int input;
    cin >> input;
    return input;
}

//creates an array from user input and returns the address of the array
int* makeArray(int size)
{
    int* newArray;
    newArray = new int[size];
    return newArray;
}

//fills the array with data from user input
//accepts a pointer to an int array and the size of the array
void fillArray(int* dynamicArray,int size)
{
    //steps though each value in the array
    for (int index = 0; index < size; index++)
    {
        //asks for user input repeatedly until they enter
        //a valid number and assigns the number to the array
        do
        {
            cout << "\n   " << "Enter a test score: \n   ";
            cin >> *(dynamicArray + index);
            if (*(dynamicArray + index) < 0)
            {
                cout << "   " << "invalid test score enter again.\n";
            }
        }         
        while (*(dynamicArray + index) < 0);
    }
}

//sorts the numbers from highest to lowest
void selectionSort(int* dynamicArray, int size)
{
    //declares the variables needed to sort
    int maxIndex;
    int maxValue;

    //begins to scan through contents of the array
    for (int startScan = 0; startScan < (size - 1); startScan++)
    {
        //sets maxIndex to the first index value in the array  
        maxIndex = startScan;
        //sets maxValue to the first item in the array
        maxValue = *(dynamicArray + startScan);
        //scans through the second item forward in the array
        for (int index = startScan + 1; index < size; index++)
        {
            //checks if the next item is less than the current maxValue
            if (*(dynamicArray + index) > maxValue)
            {
                //if it is less then it becomes the new maxValue
                maxValue = *(dynamicArray + index);
                maxIndex = index;
            }
        }
        *(dynamicArray + maxIndex) = *(dynamicArray + startScan);
        *(dynamicArray + startScan) = maxValue;
    }
}

//calculates the average of all the values in the array
int caclulateAverage(int* dynamicArray, int size)
{
    //declares variables needed to hold data
    int average;
    int accumulator = 0;

    //steps through each value in the array and adds the
    //value to the accumulator variable
    for (int index = 0; index < size; index++)
    {
        accumulator += *(dynamicArray + index);
    }
    //calculates the average value by dividing the accumulator total
    //by the size of the array
    average = accumulator / size;
    return average;
}

//this function displays the final sorted test scores.
void displayScores(int* dynamicArray, int size, int average)
{
    cout << "\n   " << "The test scores ordered from "
        "highest to lowest are: \n";

    for (int index = 0; index < size; index++)
        cout << "   " << *(dynamicArray + index) << endl;

    cout << "\n   " << "The average of the test scores was: \n";
    cout << "   " << average << endl << endl;
}