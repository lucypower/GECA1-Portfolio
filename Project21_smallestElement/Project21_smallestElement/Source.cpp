#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers[10];
	int num, min;

	cout << "Please input a number" << endl;

	for (int i = 0; i < 10; i++)
	{
		cin >> numbers[i];
	}

	min = numbers[0];

	for (int i = 0; i < 10; i++)
	{
		if (min > numbers[1])
			min = numbers[i];
	}

	cout << "Smallest number is : " << min << endl;
	
	
	
	
	
	
	/*vector<int> myNumbers;

	myNumbers.push_back(18);
	myNumbers.push_back(22);
	myNumbers.push_back(12);

	for (int i = 0; i < myNumbers.size(); i++)
	{
		cout << myNumbers[i] << endl;
	}

	cout << "\n Position 2 in the vector holds: " << myNumbers[1] << endl;

	myNumbers.pop_back();
	cout << "\nVector now contains: " << endl;
	for (int i = 0; i < myNumbers.size(); i++)
	{
		cout << myNumbers[i] << endl;

		myNumbers.clear();

		if (myNumbers.empty())
			cout << "Vector is empty" << endl;
	}*/

	return 0;
}