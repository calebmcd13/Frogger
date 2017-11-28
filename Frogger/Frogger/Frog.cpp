#include "Frog.h"



Frog::Frog()
{
	shape = new sf::RectangleShape(sf::Vector2f(FROG_SIZE, FROG_SIZE));
	shape->setFillColor(sf::Color::Green); //frogs are usually green
	shape->setPosition(WINDOW_MAX_X / 2, WINDOW_MAX_Y - FROG_SIZE);

}

sf::RectangleShape* Frog::getShape()
{
	return shape;

}
void Frog:: moveLeft()
{
	shape->move(-VEHICLE_LENGTH, 0);

}
void Frog:: moveRight()
{
	shape->move(VEHICLE_LENGTH, 0);

}
void Frog::moveUp()
{
	shape->move(0,VEHICLE_LENGTH);

}
void Frog::moveDown()
{
	shape->move(0,-VEHICLE_LENGTH);
}