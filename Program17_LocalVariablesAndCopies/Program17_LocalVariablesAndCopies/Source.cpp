#include <iostream>

void addTwo(int num)
{
	// add two to the number passed
	num += 2;

	// outputs the contents of num within the function
	std::cout << "Function : num = " << num << std::endl;
}

int main()
{
	int myNum = 6;

	std::cout << "Main [before] : myNum = " << myNum << std::endl;

	addTwo(myNum);

	std::cout << "Main [after] : myNum = " << myNum << std::endl;

	return 0;
}