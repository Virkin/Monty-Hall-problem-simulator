// Main.cpp : définit le point d'entrée de l'application.
//

#include "Main.hpp"
#include "MontyHall.hpp"
#include "Player.hpp"

using namespace std;

int main()
{
	srand(time(NULL));

	static const int nbGame = 50;
	static const int nbDoors = 3;

	MontyHall game = MontyHall(nbDoors);
	
	Player stubbornPlayer = Player();
	Player smartPlayer = Player();

	int initChoose;
	int goatDoor;
	int otherClosedDoor;
	int carDoor;

	for (int i = 0; i < nbGame; i++)
	{
		game.generate();

		initChoose = rand() % nbDoors;

		game.setPick(initChoose);

		stubbornPlayer.setChosenDoor(initChoose);
		smartPlayer.setChosenDoor(initChoose);

		goatDoor = game.getGoatDoor();

		otherClosedDoor = ((nbDoors * (nbDoors - 1)) / 2) - initChoose - goatDoor;
		
		smartPlayer.setChosenDoor(otherClosedDoor);

		carDoor = game.getCarDoor();

		if (carDoor == stubbornPlayer.getChosenDoor())
		{
			stubbornPlayer.addWin();
		}
		else if (carDoor == smartPlayer.getChosenDoor())
		{
			smartPlayer.addWin();
		}

		stubbornPlayer.addGame();
		smartPlayer.addGame();
	}

	cout << "stubborn winrate : " << stubbornPlayer.getWinrate() << "\n smart winrate : " << smartPlayer.getWinrate() << endl;

	return 0;
}
