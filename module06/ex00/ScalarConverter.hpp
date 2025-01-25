#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iomanip>
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <cstdint>

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &rhs);
	ScalarConverter &operator=(const ScalarConverter &rhs);
	virtual ~ScalarConverter();

public:
	static void convert(const std::string &literal);
};

int validation(const std::string &av);

#endif