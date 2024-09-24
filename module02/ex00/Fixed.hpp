#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed& rhs);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		void	operator=(const Fixed& rhs);

	private:
		int					_fixed;
		static const int	_bitCount = 8;
};

#endif