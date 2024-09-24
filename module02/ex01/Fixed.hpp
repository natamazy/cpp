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

		int		getRawBits(void) const;
		void	setRawBits(int const	raw);
		void	operator=(const Fixed&	rhs);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_fixed;
		static const int	_bitCount = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &f);

#endif