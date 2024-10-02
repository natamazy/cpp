#include "Fixed.hpp"

Fixed::Fixed() {
	this->_fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int newI) {
	this->_fixed = (newI) << this->_bitCount;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float newF) {
	this->_fixed = roundf((newF) * (1 << this->_bitCount));
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& rhd) {
	std::cout << "Copy constructor called" << std::endl;

	this->_fixed = rhd.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& rhd) {
	std::cout << "Copy assignment called" << std::endl;
	this->_fixed = rhd.getRawBits();

	return *this;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed;
}

void	Fixed::setRawBits(int const raw) {
	this->_fixed = raw;
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(_fixed) / static_cast<float>(1<<_bitCount));
}

int		Fixed::toInt(void) const {
	return (toFloat());
}

std::ostream	&operator<<(std::ostream &out, const Fixed &f) {
	out << f.toFloat();
	return out;
}