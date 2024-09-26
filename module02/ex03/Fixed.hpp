#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed&	rhs);
		Fixed(const int newI);
		Fixed(const float newF);
		~Fixed();

		Fixed	operator=(const Fixed&	rhs);

		bool	operator>(Fixed fixed) const;
		bool	operator>=(Fixed fixed) const;
		bool	operator<(Fixed fixed) const;
		bool	operator<=(Fixed fixed) const;
		bool	operator==(Fixed fixed) const;
		bool	operator!=(Fixed fixed) const;

		float	operator+(Fixed fixed) const;
		float	operator-(Fixed fixed) const;
		float	operator/(Fixed fixed) const;
		float	operator*(Fixed fixed) const;

		Fixed	operator++();
		Fixed	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		static	Fixed &min(Fixed &first, Fixed &second);
		static	const Fixed &min(Fixed const &first, Fixed const &second);
		static	Fixed &max(Fixed &first, Fixed &second);
		static	const Fixed &max(Fixed const &first, Fixed const &second);

		int		getRawBits(void) const;
		void	setRawBits(int const	raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_fixed;
		static const int	_bitCount = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &f);

#endif