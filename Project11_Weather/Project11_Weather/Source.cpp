#include <iostream>

using namespace std;

int num1, num2, num3, num4;

int usersInput;


int main()
{
	cout << "What is the weather? Please choose one of the following options : 1 . Sunny : 2 . Cloudy : 3 . Raining : 4 . Exit" << endl;

	cin >> usersInput;

	switch( usersInput )
	{
	case 1:
		cout << "Sunny weather selected : make sure to have your suncream!" << endl;
		break;
	case 2:
		cout << "Cloudy weather selected : grab a jacket just in case!" << endl;
		break;
	case 3:
		cout << "Rainy weather selected : grab an umbrella!" << endl;
		break;
	default:
		cout << "Have a nice day!" << endl;
		break;
	}

	return 0;
}