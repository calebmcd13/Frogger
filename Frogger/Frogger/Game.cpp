#include "Game.h"


Game::Game()
{

	for (int i = 0; i<NUMBER_OF_LANES; i++)
	{
		traffic.push_back(std::vector<Vehicle*>());
		int speed = (rand() % MAX_VEHICLE_SPEED) + 1;
		for (int j = 0; j < MAX_NUMBER_OF_VEHICLES; j++)
		{
			traffic[i].push_back(new Car((j+1)*MIN_SPACE_BETWEEN_VEHICLES, i*NUMBER_OF_LANES, speed, sf::Color::Black));
			traffic[i][j]->setLane(i);
			traffic[i][j]->setSpeed(speed);

		}
	}
}


std::vector<std::vector<Vehicle*> > Game :: getTraffic()
{
	return traffic;

}
