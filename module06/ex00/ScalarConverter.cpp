#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter's default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &rhs)
{
	std::cout << "ScalarConverter's copy constructor called" << std::endl;
	*this = rhs;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
	std::cout << "ScalarConverter's copy assignment operator called" << std::endl;
	if (this != &rhs)
		;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter's destructor called" << std::endl;
}

void convertChar(const std::string &lit)
{
	std::cout << "char " << "'" << static_cast<char>(lit[0]) << "'" << std::endl;
	std::cout << "int " << static_cast<int>(lit[0]) << std::endl;
	std::cout << "float " << std::fixed << std::setprecision(1) << static_cast<float>(lit[0]) << "f" << std::endl;
	std::cout << "double " << std::fixed << std::setprecision(1) << static_cast<double>(lit[0]) << std::endl;
}

void convertDigit(const std::string &lit)
{
	try
	{
		int value = std::atoi(lit.c_str());
		if ((value >= 0 && value <= 31) || value == 127)
			std::cout << "char non-printable" << std::endl;
		else if (value < 0 || value > 128)
			std::cout << "char impossible" << std::endl;
		else
			std::cout << "char " << "'" << static_cast<char>(value) << "'" << std::endl;
		if (lit.length() > 9)
			std::cout << "int impossible" << std::endl;
		else
			std::cout << "int " << value << std::endl;
	}
	catch (const std::invalid_argument &exp)
	{
		std::cout << "char impossible" << std::endl;
		std::cout << "int impossible" << std::endl;
	}
	catch (const std::out_of_range &exp)
	{
		std::cout << "char impossible" << std::endl;
		std::cout << "int impossible" << std::endl;
	}

	try
	{
		float float_value = std::atof(lit.c_str());
		if (std::floor(float_value) == float_value)
		{
			std::cout << "float " << std::fixed << std::setprecision(1) << float_value << "f" << std::endl;
		}
		else
		{
			std::cout << "float " << float_value << "f" << std::endl;
		}
	}
	catch (const std::invalid_argument &exp)
	{
		std::cout << "float impossible" << std::endl;
	}
	catch (const std::out_of_range &exp)
	{
		std::cout << "float impossible" << std::endl;
	}
	try
	{
		double double_value = std::atof(lit.c_str());
		if (std::floor(double_value) == double_value)
		{
			std::cout << "double " << std::fixed << std::setprecision(1) << double_value << std::endl;
		}
		else
		{
			std::cout << "double " << double_value << std::endl;
		}
	}
	catch (const std::invalid_argument &exp)
	{
		std::cout << "double impossible" << std::endl;
	}
	catch (const std::out_of_range &exp)
	{
		std::cout << "double impossible" << std::endl;
	}
}

int stringToInt(const std::string &str)
{
	std::stringstream temp_stream(str);
	int result;
	if (!str.empty() && str[0] == '.')
		return 0;
	else if (!(temp_stream >> result) || !(temp_stream.eof()))
	{
		throw std::invalid_argument("invalid integer: " + str);
	}
	return result;
}

double stringToDouble(const std::string &str)
{
	std::stringstream temp_stream(str);
	double result;
	if (!(temp_stream >> result) || !(temp_stream.eof()))
	{
		throw std::invalid_argument("invalid double value: " + str);
	}
	return result;
}

float stringToFloat(const std::string &str)
{
	std::stringstream temp_stream(str);
	float result;
	if (!(temp_stream >> result) || !(temp_stream.eof()))
	{
		throw std::invalid_argument("invalid float value: " + str);
	}

	return result;
}

void ScalarConverter::convert(const std::string &lit)
{
	if (lit.length() == 1 && !std::isdigit(lit[0]))
	{
		convertChar(lit);
	}
	else
	{
		convertDigit(lit);
	}
}

int validation(const std::string &av)
{
	int i = 0;

	if (av.length() == 1 && !std::isdigit(av[0]))
		return 0;
	while (av[i])
	{
		if (av == "-inff" || av == "+inff" || av == "inff" || av == "inf" || av == "-inf" || av == "+inf")
		{
			std::cout << "char impossible" << std::endl;
			std::cout << "int impossible" << std::endl;
			if (av[0] == '-')
			{
				std::cout << "float -inff" << std::endl;
				std::cout << "double -inf" << std::endl;
			}
			else
			{
				std::cout << "float inff" << std::endl;
				std::cout << "double inf" << std::endl;
			}
			exit(0);
		}
		else if (av == "nanf" || av == "nan")
		{
			std::cout << "char impossible" << std::endl;
			std::cout << "int impossible" << std::endl;
			std::cout << "float nanf" << std::endl;
			std::cout << "double nan" << std::endl;
			exit(0);
		}
		if (std::isdigit(av[i]) || av[i] == 'f' || av[i] == '.' || av[i] == '+' || av[i] == '-')
			i++;
		else
			return 1;
	}
	return 0;
}