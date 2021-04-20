#include <iostream>

using namespace std;

int number;
char star = '*';
char answer;
bool state = true;

int main()
{
	while (state == true)
	{
		cout << "Input a number between 1 and 10" << endl;

		cin >> number;

		for (int i = number - 1; i >= 0; i--)
		{
			for (int j = i; j < number; j++)
			{
				cout << star;
			}
			cout << " " << endl;
		}

		cout << "Would you like to go again? Y or N" << endl;

		cin >> answer;

		if (answer == 'Y' || answer == 'y')
		{
			state = true;
		}
		else if (answer == 'N' || answer == 'n')
		{
			cout << "Goodbye" << endl;
			cout << " " << endl;
			break;
		}
	}
	exit;
}