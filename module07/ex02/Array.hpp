#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
private:
	T *_array;
	unsigned int _size;

public:
	Array();
	Array(unsigned int n);
	Array(const Array &rhs);
	Array &operator=(const Array &rhs);
	T &operator[](unsigned int i);
	unsigned int size() const;
	~Array();
};

#include "Array.tpp"

#endif