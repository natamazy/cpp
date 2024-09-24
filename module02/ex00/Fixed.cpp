#include "Fixed.hpp"

Fixed::Fixed() {
	this->_fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& rhd) {
	std::cout << "Copy constructor called" << std::endl;

	this->_fixed = rhd.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::operator=(const Fixed& rhd) {
	std::cout << "Copy assignment called" << std::endl;

	this->_fixed = rhd.getRawBits();
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;

	return this->_fixed;
}

void	Fixed::setRawBits(int const raw) {
	this->_fixed = raw;
}