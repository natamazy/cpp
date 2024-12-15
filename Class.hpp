#ifndef CLASS_HPP
#define CLASS_HPP

#include <iostream>
#include <string>

class Class
{
public:
	Class();
	Class(const std::string &type);
	Class(const Class &rhs);
	Class &operator=(const Class &rhs);
	virtual ~Class();

protected:
	std::string type;
};

#endif