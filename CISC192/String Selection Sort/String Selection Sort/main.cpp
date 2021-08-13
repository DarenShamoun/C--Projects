// PC 8.6 - String Selection Sort
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 05/07/2021
// ----------------------------------------------------------------------
// Sorts an array of strings.
// 
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
#include <string>
using namespace std;

//sets the value that holds the number of items in the array
const int NUM_NAMES = 20;

void displayStrings(const string array[], int size);
void selectionSort(string array[], int size);

int main()
{
    //defines the array of strings
    string names[NUM_NAMES] = {
            "Collins, Bill", "Smith, Bart", "Allen, Jim",
            "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
            "Taylor, Terri", "Johnson, Jill",
            "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
            "James, Jean", "Weaver, Jim", "Pore, Bob",
            "Rutherford, Greg", "Javens, Renee",
            "Harrison, Rose", "Setzer, Cathy",
            "Pike, Gordon", "Holland, Beth" };

    //displays the strings with the header
    displayStrings(names, NUM_NAMES);
    //sorts the array alphabetically
    selectionSort(names, NUM_NAMES);
    //displays the newly sorted strings with header
    displayStrings(names, NUM_NAMES);

    return 0;
}

void displayStrings(const string array[], int size)
{
    //the header for the output display
    cout << "   Names \n"
        << "   ------------------------- \n";
    //steps through the array and prints each string
    for (int index = 0; index < size; index ++)
    {
        cout << "   " << array[index] << endl;
    }
    cout << endl;
}

void selectionSort(string array[], int size)
{
    //declares the variables needed to sort
    int minIndex;
    string minValue;

    //begins to scan through contents of the array
    for (int startScan = 0; startScan < (size - 1); startScan++)
    {
        //sets the first index value in the array to the minIndex variable 
        minIndex = startScan;
        //sets the first item in the array to the minValue variable
        minValue = array[startScan];
        //scans through the second item forward in the array
        for (int index = startScan + 1; index < size; index++)
        {
            //checks if the next item is less than the current minValue
            if (array[index] < minValue)
            {
                //if it is less then it becomes the new minValue
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}