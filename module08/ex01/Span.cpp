#include "Span.hpp"

Span::Span() : N(0)
{
	std::cout << "Span's default constructor was called" << std::endl;
}

Span::Span(unsigned int N) : N(N)
{
	std::cout << "Span's constructor with parameters was called" << std::endl;
}

Span::Span(const Span &rhs) : N(rhs.N)
{
	std::cout << "Span's copy constructor was called" << std::endl;
	num = rhs.num;
}

Span &Span::operator=(const Span &rhs)
{
	std::cout << "Span's copy assigment operator was called" << std::endl;
	if (this != &rhs)
	{
		N = rhs.N;
		num = rhs.num;
	}
	return (*this);
}

void Span::addNumber(int value)
{
	if (num.size() >= this->N)
	{
		throw std::length_error("Length overflow");
	}
	num.push_back(value);
}

int Span::shortestSpan()
{
	if (num.size() <= 1)
		throw std::length_error("Not long enough");
	std::vector<int> sorted = num;
	std::sort(sorted.begin(), sorted.end());

	int shortest = std::numeric_limits<int>::max();
	int tmp;
	for (size_t i = 1; i < sorted.size(); i++)
	{
		tmp = sorted[i] - sorted[i - 1];
		if (tmp < shortest)
		{
			shortest = tmp;
		}
	}
	return (shortest);
}

int Span::longestSpan()
{
	if (num.size() <= 1)
	{
		throw std::length_error("Not long enough");
	}
	return (*std::max_element(num.begin(), num.end()) - *std::min_element(num.begin(), num.end()));
}

Span::~Span()
{
	std::cout << "Span's destructor was called" << std::endl;
}