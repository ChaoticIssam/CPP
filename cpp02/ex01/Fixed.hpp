#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed{
	int	store_fixed;
	static const int	frac_bits_num = 8;
	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed(const int i);
		Fixed(const float f);
		Fixed& operator = (const Fixed &obj);
		~Fixed();
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif