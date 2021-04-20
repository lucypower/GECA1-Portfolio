#include <iostream>

using namespace std;

int main()
{
	// Initialize num to 1
	int num = 1;

	cout << "num = " << num << endl;
	cout << "Increment Operater before num = " << ++num << endl;
	cout << "num after = " << num << endl;

	// Reset num to 1

	num = 1;

	cout << "num = " << num << endl;
	cout << "Increment Operater after = " << num++ << endl;
	cout << "num after = " << num << endl;

	// Reset num to 1

	num = 1;

	cout << "num = " << num << endl;
	cout << "Decrement Operater before num = " << --num << endl;
	cout << "num after = " << num << endl;

	// Reset num to 1

	num = 1;

	cout << "num = " << num << endl;
	cout << "Decrement Operater after num = " << num-- << endl;
	cout << "num after = " << num << endl;

	return 0;
}