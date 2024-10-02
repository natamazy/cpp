#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float val_x, const float val_y) : _x(val_x), _y(val_y) {}

Point::Point(const Point& other) : _x(other.getX()), _y(other.getY()) {}

float	Point::getX ( void ) const {
	return (this->_x.toFloat());
}

float	Point::getY ( void ) const {
	return (this->_y.toFloat());
}

Point& Point::operator=(const Point& other) {
	if (this == &other)
		return (*this);
	(Fixed)this->_x = other.getX();
	(Fixed)this->_y = other.getY();
	return (*this);
}

Point::~Point() {}