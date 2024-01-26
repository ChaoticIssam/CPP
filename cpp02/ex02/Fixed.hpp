#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed{
        int	store_fixed;
	    static const int	frac_bits_num = 8;
    public:
		Fixed();
		Fixed(const Fixed &obj);
        Fixed&	operator=(const Fixed &obj);
        int		getRawBits(void) const;
		Fixed(const int i);
		Fixed(const float f);
        ~Fixed();

        float	toFloat(void) const;
		int		toInt(void) const;

        Fixed   operator+(const Fixed &a) const;
        Fixed   operator-(const Fixed &a) const;
        Fixed   operator*(const Fixed &a) const;
        Fixed   operator/(const Fixed &a) const;

		bool    operator>(const Fixed &a);
        bool    operator<(const Fixed &a);
        bool    operator>=(const Fixed &a);
        bool    operator<=(const Fixed &a);
        bool    operator==(const Fixed &a);
        bool    operator!=(const Fixed &a);

        Fixed	operator++();
        Fixed	operator--();
        Fixed  operator++(int);
        Fixed  operator--(int);

		static Fixed	&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif