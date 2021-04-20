#include <iostream>

using namespace std;

char status;
int gameChoice;

int main()
{
	cout << "What is your status? s for student, t for teacher, o for other" << endl;

	cin >> status;

	cout << "Would you like game 1 or game 2" << endl;

	cin >> gameChoice;

	if (status == 's' || 't')
	{
		if (gameChoice == 1)
		{
			cout << "You can get a 20% discount!" << endl;
		}
		if (gameChoice == 2)
		{
			cout << "You can get a 10% discount!" << endl;
		}
	}
	else if (status == 'o')
	{
		if (gameChoice == 1)
		{
			cout << "You can't get a discount :(" << endl;
		}
		else if (gameChoice == 2)
		{
			cout << "You can't get a discount :(" << endl;
		}
	}
	else
	{
		cout << "You can't get a discount :(" << endl;
	}

	return 0;
}