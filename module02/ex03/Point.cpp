#include "Point.hpp"

Point::Point() {
	this->_x = 0;
	this->_y = 0;
}

Point::Point(const float x, const float y) {
	this->_x = x;
	this->_y = y;
}

// Copy constructor
Point::Point(const Point& rhd) {
	// std::cout << "Copy constructor called" << std::endl;
	this->_x = rhd.getX();
	this->_y = rhd.getY();
}

// Copy assignment operator
void	Point::operator=(const Point& rhd) {
	// std::cout << "Copy assignment called" << std::endl;
	this->_x = rhd.getX();
	this->_y = rhd.getY();
}

// Destructor
Point::~Point() {
	// std::cout << "Destructor called" << std::endl;
}

// Getters
const Fixed &Point::getX() {
	return this->_x;
}

const Fixed &Point::getY() {
	return this->_y;
}
