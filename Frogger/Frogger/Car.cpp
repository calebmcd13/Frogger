#include "Car.h"
#include "Vehicle.h"
#include <iostream>

/**************************** Constructors ********************************/

Car::Car()
	:Vehicle(){

	//Vehicle();
	std::cout << "in car default constructor\n";

}

Car::Car(int centerX, int centerY, int speed, sf::Color color)
		: Vehicle::Vehicle(centerX, centerY, speed, CAR_WIDTH_D2, color){

	//std::cout << "In  car constructor\n";
	//just calls super classes constructor, but creates two rectangle objects?
}