#include <iostream>
#include <fstream>
#include <string>
#define MAXTABLESIZE 10

int main()
{
	std::string lineOfText;

	bool running = true;
	int maxScores = 0; // number of items in array
	int count = 0;
	int lowestScoreIndex;

	int scoreValue[MAXTABLESIZE];
	std::string scoreName[MAXTABLESIZE];

	// read score.txt if exist into score/name arrays and set name count
	std::ifstream scoresIn("Scores.txt"); // open file

	while (getline(scoresIn, lineOfText))
	{ // file format in "name,score"
		//std::cout << lineOfText << std::endl;

		int position = lineOfText.find(",");
		scoreName[maxScores] = lineOfText.substr(0, position);
		scoreValue[maxScores] = std::stoi(lineOfText.substr(position + 1));
		maxScores++;
	}

	scoresIn.close();

	while (running == true)
	{
		int choice;
		std::cout << "\n Input the number to navigate the menu \n" << std::endl;
		std::cout << " 1. Enter a score \n 2. Display scores \n 3. Exit" << std::endl;
		std::cin >> choice;

		if (choice == 1)
		{ // enter score			
			std::string name;
			std::cout << "\n Please enter your name" << std::endl;
			std::cin >> name;

			int score;
			std::cout << "\n Please enter your score" << std::endl;
			std::cin >> score;
			
			if (maxScores < MAXTABLESIZE)
			{
				scoreName[maxScores] = name;
				scoreValue[maxScores] = score;
				maxScores++;
			}
			else
			{ // find smallest number in array
				lowestScoreIndex = 0;

				for (int i = 1; i <= maxScores - 1; i++)
				{
					if (scoreValue[i] < scoreValue[lowestScoreIndex])
					{
						lowestScoreIndex = i;
					}
				} // lowestScoreIndex now points to row withthe lowest value

				if (score > scoreValue[lowestScoreIndex])
				{
					scoreValue[lowestScoreIndex] = score;
					scoreName[lowestScoreIndex] = name;
				}
				else
				{
					std::cout << "Your score did not make the top 10" << std::endl;
				}
			}

			// write current score table to file
			std::ofstream scoresOut;
			scoresOut.open("Scores.txt", std::ios::trunc);
			for (int i = 0; i < maxScores; i++)
			{
				scoresOut << scoreName[i] << "," << scoreValue[i] << std::endl;
			}	
			scoresOut.close();
		}

		else if (choice == 2)
		{ // display score
			std::cout << "Top Ten Scores \n" << std::endl;

			for (int i = 0; i < maxScores; i++)
			{
				std::cout << "Name : " << scoreName[i] << " " << "Score : " << scoreValue[i] << std::endl;
		    }      
		}

		else if (choice == 3)
		{ // exit 
			running = false;
		}
		else
		{
			std::cout << " Please input a valid number" << std::endl;
		}
	}


	return 0;
}