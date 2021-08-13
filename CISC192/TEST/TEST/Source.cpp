#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//void showPrices(const double prices[], int nprices);
//void display_array(const int* array, int size);
void playGame(const string* player, int* score, int nplayers);

int main()
{
	int nplayers;
	string* player;
	int* score;

	do
	{
		cout << "\nPlease enter the number of players: ";
		cin >> nplayers;
		if (nplayers < 1 || nplayers > 10)
		{
			cout << "\nThis is an invalid entry.";
		}
	} 	
	while (nplayers < 1 || nplayers > 10);

	player = new string[nplayers];
	score = new int[nplayers];

	playGame(player, score, nplayers);


	////int nprices = 5;
	//const int PRICE_LIST_SIZE = 5;
	//int prices[PRICE_LIST_SIZE];
	//

	//prices[0] = 1;
	//prices[1] = 5;
	//prices[2] = 4;
	//prices[3] = 6;
	//prices[4] = 1;

	//display_array(prices, PRICE_LIST_SIZE);
	//return 0;
	//showPrices(prices, PRICE_LIST_SIZE);

	//return 0;

//	const int nprices = 3;
//	int score[nplayers] = {453, 223, 982};
//	string player[nplayers] = {"John Smith", "Holly Lee", "Frank Tran"};
//
//	cout << "   " << setw(15) << left 
//		<< "Player" << setw(3) << " Score" << endl;
//	cout << "   " << setw(15) << "---------------" 
//		<< setw(3) << " -----" << endl;
//
//	for (int index = 0; index < nplayers; index++)
//	{
//		cout << "   " << setw(15) << player[index] 
//			<< "  " << setw(3) << score[index] << endl;
//	}
//
//	showPrices(prices, PRICE_LIST_SIZE);                                                                                                         


}

//void showPrices(const double prices[], int nprices)
//{
//	for (int index = 0; index < nprices; index++)
//	{
//		cout << prices[index];
//	}
//}

//void display_array(const int* array, int size)
//{
//	for (int index = 0; index < size; index++)
//	{
//		cout << *(array + index) << " ";
//	}
//}

void playGame(const string* player, int* score, int nplayers)
{

}