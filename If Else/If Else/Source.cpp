#include <iostream>
using namespace  std;

int main()
{
	int age = 30;

	if (age > 60)
	{
		cout << "wow you are old" << endl;
		if (age > 100)
		{
			cout << "why are you still alive" << endl;
		}
	}
	else
	{
		cout << "wow you are young" << endl;
	}

	return 0;
}