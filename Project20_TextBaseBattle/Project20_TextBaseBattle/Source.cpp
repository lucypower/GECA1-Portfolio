#include <iostream>

int playerHealth = 1000, enemyHealth = 2000;
bool gameState = true;

int attack(int choice)
{
	int swordDmg = 300;
	int magicDmg = 650;
	int axeDmg = 450;
	int trollSword = 350;
	int trollMagic = 500;
	int trollAxe = 100;

	switch (choice)
	{
	case 1:

		enemyHealth = enemyHealth - swordDmg;
		playerHealth = playerHealth - trollSword;

		std::cout << "You have successfully hit the troll with your sword" << std::endl;
		std::cout << "You have been hit by the Troll's sword" << std::endl;

		if (playerHealth <= 0)
		{
			playerHealth = 0;
		}
		else if (enemyHealth <= 0)
		{
			enemyHealth = 0;
		}

		std::cout << "You currently have " << playerHealth << "HP" << std::endl;
		std::cout << "The enemy currently has " << enemyHealth << "HP" << std::endl;

		break;

	case 2:
		
		enemyHealth = enemyHealth - magicDmg;
		playerHealth = playerHealth - trollMagic;

		std::cout << "You have successfully hit the troll with your magic" << std::endl;
		std::cout << "You have been hit by the Troll's magic" << std::endl;

		if (playerHealth <= 0)
		{
			playerHealth = 0;
		}
		else if (enemyHealth <= 0)
		{
			enemyHealth = 0;
		}

		std::cout << "You currently have " << playerHealth << "HP" << std::endl;
		std::cout << "The enemy currently has " << enemyHealth << "HP" << std::endl;

		break;

	case 3:
		
		enemyHealth = enemyHealth - axeDmg;
		playerHealth = playerHealth - trollAxe;

		std::cout << "You have successfully hit the troll with your axe" << std::endl;
		std::cout << "You have been hit by the Troll's axe" << std::endl;

		if (playerHealth <= 0)
		{
			playerHealth = 0;
		}
		else if (enemyHealth <= 0)
		{
			enemyHealth = 0;
		}

		std::cout << "You currently have " << playerHealth << "HP" << std::endl;
		std::cout << "The enemy currently has " << enemyHealth << "HP" << std::endl;

		break;
	}
	
	return 0;
}

bool playState()
{
	char playAgain;

	if (enemyHealth <= 0)
	{
		std::cout << "You have killed the Troll and won!" << std::endl;
	}
	else if (playerHealth <= 0)
	{
		std::cout << "You have been killed by the Troll" << std::endl;
	}
	std::cout << "Would you like to play again? y/n" << std::endl;
	std::cin >> playAgain;

	if (playAgain == 'y' || playAgain == 'Y')
	{
		playerHealth = 1000;
		enemyHealth = 2000;

		return true;
	}
	else if (playAgain == 'n' || playAgain == 'N')
	{
		return false;
	}
}

int main()
{
	int choice;
	while (gameState == true) // round loop, once game finish, reset
	{
		std::cout << "You have met a troll. You have 3 options. Each option has a different effect. \n" << std::endl;
		std::cout << " 1) use sword ~ [effect] \n 2) use magic ~ [effect] \n 3) use axe ~ [effect] \n" << std::endl;		

		while (gameState == true) // update loop
		{	
			std::cin >> choice;

			attack(choice);

			if (playerHealth == 0 || enemyHealth == 0)
			{
				gameState = false;
			}
		}
		gameState = playState();
	}	
}