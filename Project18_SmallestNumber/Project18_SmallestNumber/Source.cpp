#include <iostream>

int a, b;

int smallestNumber(int a, int b)
{
	if (a > b)
	{
		std::cout << a << " is the bigger number" << std::endl;
	}
	else if (b > a)
	{
		std::cout << b << " is the bigger number" << std::endl;
	}
	else if (a == b)
	{
		std::cout << a << " is the same size as " << b << std::endl;
	}

	return 0;
}

int main()
{
	std::cout << "Please input a number" << std::endl;
	std::cin >> a;

	std::cout << "Please input another number" << std::endl;
	std::cin >> b;

	smallestNumber(a,b);

	return 0;
}