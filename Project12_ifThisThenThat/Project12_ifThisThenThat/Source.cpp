#include <iostream>

using namespace std;

int rain = 1;
int snow = 2;

int weather;
int temperature;

int main()
{
	cout << "Please tell me whether it is 1 : Raining or 2 : Snowing" << endl;

	cin >> weather;

	cout << "What is the temperature right now" << endl;

	cin >> temperature;

	if (weather == 1)
	{
		if (temperature > 15)
		{
			cout << "You should wear a light raincoat" << endl;
		}
		else
		{
			cout << "You should wear a thick coat" << endl;
		}
	}
	else if (weather == 2)
	{
		if (temperature > 5)
		{
			cout << " You should wear something warm" << endl;
		}
		else if (temperature > 0)
		{
			cout << "You should wrap up well" << endl;
		}
		else
		{
			cout << "You should stay home!" << endl;
		}
	}
	else
	{
		cout << "Have a nice day!" << endl;
	}

	return 0;
}