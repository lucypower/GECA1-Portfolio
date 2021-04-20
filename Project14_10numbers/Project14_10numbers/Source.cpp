#include <iostream>;

using namespace std;

int num1, num2, num3;

bool input = true;

int main()
{
	cout << "Please enter a number" << endl;
	cin >> num1;
	
	cout << "Please enter another number" << endl;
	cin >> num2;

	float total = num1 + num2;
	float average = total / 2;

	cout << total << " is the total of your numbers" << endl;

	cout << average << " is the average of your number \n" << endl;

	while (input == true)
	{
		int n = 3;

		cout << "Please enter another number" << endl;
		cin >> num3;

		if (num3 == 0)
		{
			break;
		}
		else
		{
			total = total + num3;
			cout << total << " is the total of your numbers" << endl;

			average = total / n;
			cout << average << " is the average of your number \n" << endl;
			n++;
		}
	}
	return 0;
}