#include <iostream>

void add25(int& rNum)
{
	int number = 25;
	rNum = rNum + number;
}

void minus25(int& rNum)
{
	int number = 25;
	rNum = rNum - 25;
}


int main()
{
	int num;
	int& rNum = num;
	int input;

	std::cout << "Please input a number" << std::endl;
	std::cin >> input;
	rNum = input;

	std::cout << "The number you inputted was : " << rNum << std::endl;

	add25(rNum);

	std::cout << "This is your number + 25 : " << rNum << "\n" << std::endl;

	std::cout << "Please input another number" << std::endl;
	std::cin >> input;
	num = input;

	std::cout << "The number you inputted was : " << num << std::endl;

	minus25(rNum);

	std::cout << "This is your number - 25 : " << rNum << "\n" << std::endl;

	return 0;
}