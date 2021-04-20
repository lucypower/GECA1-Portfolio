#include <iostream>

int number;
bool odd, even;
int numOfOdd, oddTotal, numOfEven, evenTotal;

int oddOrEven(int number)
{
	int oddEven = number % 2;

	if (oddEven == 0)
	{
		numOfEven++;
		evenTotal = evenTotal + number;
	}
	else if (oddEven != 0)
	{
		numOfOdd++;
		oddTotal = oddTotal + number;
	}

	return 0;
}

int outputResults()
{
	std::cout << "There were " << numOfEven << " even numbers which total to " << evenTotal << std::endl;
	std::cout << "There were " << numOfOdd << " odd numbers which total to " << oddTotal << std::endl;

	return 0;
}

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		std::cout << "Enter a number" << std::endl;
		std::cin >> number;
		
		oddOrEven(number);
	}	

	outputResults();

	return 0;
}