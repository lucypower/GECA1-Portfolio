#include <iostream>
#include <string>

int main()
{
	std::string testString = "Do you know who loves C++, XX does!";
	int position;
	//std::string name;

	std::string currentName = "XX";
	std::string newName;

	std::cout << "Please enter a name" << std::endl;
	getline(std::cin, newName);	

	// change text
	position = testString.find(currentName);

	testString.insert(position + 1, newName, 0, newName.length());
	std::cout << testString << std::endl;

	// takes straight to end state
	//testString.replace(testString.find(currentName), currentName.length(), newName);

	// testing positioning
	//name = testString.substr(0, position);
	//name = testString.substr(position + currentName.length() + newName.length());

	testString = testString.substr(0, position).append(newName).append( testString.substr(position + currentName.length() + newName.length()));
	std::cout << testString << std::endl;

	// remember what name is in the text string
	currentName = newName;

	std::cout << "Please enter another name. This name must be longer than the previously entered name" << std::endl;
	getline(std::cin, newName);

	if(newName.length() > currentName.length())
	{  // replace text
		testString.replace(testString.find(currentName), currentName.length(), newName);
		std::cout << testString << std::endl;
	}

	return 0;
}