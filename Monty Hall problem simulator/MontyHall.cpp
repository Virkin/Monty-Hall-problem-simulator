#include "MontyHall.hpp"
#include "Main.hpp"

using namespace std;

MontyHall::MontyHall(int initNbDoors) : nbDoors(initNbDoors)
{}

void MontyHall::generate()
{
    int goodDoor = rand() % nbDoors;
    
    for (int i = 0; i < nbDoors; i++)
    {
        if (i == goodDoor)
        {
            doors[i] = true;
        }
        else
        {
            doors[i] = false;
        }

        //cout << "[" << i << "]->" << doors[i] << endl;
    }
}

void MontyHall::setPick(int pick)
{
    chosenDoor = pick;
}

int MontyHall::getGoatDoor()
{
    vector<int> goatPos;
    
    for (int i = 0; i < nbDoors; i++)
    {
        if (doors[i] == false)
        {
            goatPos.push_back(i);
        }
    }
    
    int chosenGoat = -1;

    do
    {
        chosenGoat = rand() % goatPos.size();
    } while (goatPos[chosenGoat] == chosenDoor);

    return goatPos[chosenGoat];
}

int MontyHall::getCarDoor()
{
    for (int i = 0; i < nbDoors; i++)
    {
        if (doors[i] == true)
        {
            return i;
        }
    }
}

