#include <iostream>

void inputDetails(int* n1, int* n2)
{
	int num1, num2;

	std::cout << "Please input a number" << std::endl;
	std::cin >> num1;
	std::cout << "Please input another number" << std::endl;
	std::cin >> num2;

	//std::cout << "DEBUG::inputDetails num1 >" << num1 << "<  num2 >" << num2 << "<" << std::endl;

	*n1 = num1;
	*n2 = num2;
}

void outputDetails(int &num1, int &num2, int* pNum)
{
	std::cout << "num1 value : " << num1 << std::endl;
	std::cout << "num1 address : " << &num1 << std::endl;
	std::cout << "num2 value : " << num2 << std::endl;
	std::cout << "num2 address : " << &num2 << std::endl;
	std::cout << "pNum value : " << pNum << std::endl;
	std::cout << "pNum dereferenced value : " << *pNum << std::endl;
	std::cout << "pNum address : " << &pNum << std::endl;
}

int main()
{
	int  num1;
	int  num2;
	int* pNum = &num1;

	inputDetails(&num1, &num2);
	//std::cout << "DEBUG::main #1 num1 >" << num1 << "<  num2 >" << num2 << "<" << std::endl;

	std::cout << "\n num1 \n" << std::endl;
	outputDetails(num1, num2, pNum);

	//std::cout << "DEBUG::main #2 num1 >" << num1 << "<  num2 >" << num2 << "<" << std::endl;
	std::cout << "\n num2 \n" << std::endl;

	pNum = &num2;

	outputDetails(num1, num2, pNum);
		
	pNum = NULL;
	delete pNum;

	return 0;
}