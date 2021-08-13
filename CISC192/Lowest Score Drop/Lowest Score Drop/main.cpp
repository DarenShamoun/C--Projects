// PC 6.11 - Lowest Score Drop
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 04/23/2021
// ----------------------------------------------------------------------
// Calculates the average of a group of test scores after the lowest 
// score in the group is dropped.
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
#include <iomanip>
using namespace std;

void getScore(int&);
void calcAverage(int , int , int , int , int );
int findLowest(int , int , int , int , int);

int main()
{
	//declaring all of the score variables.
	int score_1,score_2,score_3,score_4,score_5;
	
	//asking for each score from the user.
	getScore(score_1);
	getScore(score_2);
	getScore(score_3);
	getScore(score_4);
	getScore(score_5);
	
	//calcualting the average of the top 4 values and displaying it.
	calcAverage(score_1,score_2,score_3,score_4,score_5);

	return 0;
}

void getScore(int& testScore)
{
	//asking for the test score.
	cout <<"   "<< "YOU ARE STUPID" << endl;
	cout << "   ";
	cin >> testScore;

	//verifying the validity of the value
	int score = 0;
	while (testScore < 0 || testScore > 100)
	{
		cout << "   " << "Please enter a valid value:" << endl;
		cout << "   ";
		cin >> testScore;
	}

}

//calcualting the average of the top 4 values and displaying it.
void calcAverage(int test1, int test2,
	int test3, int test4, int test5)
{
	cout << "   " << "The average of the top 4 scores is: ";
	cout << ((test1 + test2 + test3 + test4 + test5) -
		findLowest(test1, test2, test3, test4, test5)) / 4 << endl;
}

//find the lowest value of the test scores
int findLowest(int score_1, int score_2, int score_3, int score_4, int score_5)
{
	int lowest = score_1;
	if (score_2 < lowest)
		lowest = score_2;
	if (score_3 < lowest)
		lowest = score_3;
	if (score_4 < lowest)
		lowest = score_4;
	if (score_5 < lowest)
		lowest = score_5;

	return lowest;
}
