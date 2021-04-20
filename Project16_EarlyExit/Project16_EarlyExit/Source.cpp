#include <iostream>

int playerLife = 100;
int damage;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		std::cout << "Question " << i << " : How much damage shall I deal? \n";

		std::cin >> damage;

		playerLife = playerLife - damage;

		if (playerLife <= 0)
		{
			std::cout << "Early End. Player Died!" << std::endl;
			break;
		}

		std::cout << "Players Health : " << playerLife << "HP" << std::endl;

		if (i == 10 && playerLife > 0)
		{
			std::cout << "All questions asked, Player survived!" << std::endl;
		}
	}
}