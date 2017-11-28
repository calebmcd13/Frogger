#include "Game.h"


Game::Game()
{

	//initialize traffic vector
	for (int i = 0; i<NUMBER_OF_LANES; i++)
	{
		traffic.push_back(std::vector<Vehicle*>());
		int speed = (rand() % 2);
		int xPosition = 0;
		//determine whether to make speed negative (and thus start on the right side of the screen
		if (speed)
		{
			speed = -((rand() % MAX_VEHICLE_SPEED) + 1);
			
		}
		else
		{
			speed = (rand() % MAX_VEHICLE_SPEED) + 1;
		
		}

		for (int j = 0; j < MAX_NUMBER_OF_VEHICLES; j++)
		{
			
			int differential = (rand() % 10) + 1;
			traffic[i].push_back(new Car((j+1)+differential, i*FROG_SIZE + 2, speed, sf::Color::Black)); //2 is wiggle room
			traffic[i][j]->setLane(i);
			traffic[i][j]->setSpeed(speed);

		}
	}
}


std::vector<std::vector<Vehicle*> > Game :: getTraffic()
{
	return traffic;

}


void Game::updateTraffic(void)
{

}