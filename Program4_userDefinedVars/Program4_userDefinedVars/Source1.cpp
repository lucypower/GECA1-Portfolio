#include <iostream>

using namespace std;

//typedef int cost;

enum CarMake
{
	Ford = 1,
	Fiat,
	Tesla,
	VW,
	BMW,
	AstonMartin,
	Honda,
	Nissan,
	Toyota,
	Audi,
	Jaguar,
	Dodge
};

int cost = 13000;

int main()
{
	std::cout << "The cost of my car is : " << cost << " and my car ID is : " << Honda << endl;

	return 0;
}