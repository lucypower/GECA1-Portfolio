#include <iostream>
#include <string>

using namespace std;

char initial;

int main()
{
	char name[25];

	cout << " Enter your first name initial followed by a space, then your middle name(s) initial followed by a space, \n then your entire surname \n eg J N Smith" << endl;
	cin.getline(name, 25);

	cout << name;

	// use if loop to get it to work out whether it last name or not?

	return 0;
}