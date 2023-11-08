#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor has been called." << std::endl;
	this->store_fixed = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor has been called." << std::endl;
}

Fixed::Fixed(const Fixed &obj){
	std::cout << "Copy constructor has been called." << std::endl;
	*this = obj;
}

Fixed::Fixed(const int i){
	std::cout << "Int constructor has been called." << std::endl;
	store_fixed = i * (1 << frac_bits_num);
}

Fixed::Fixed(const float f){
	std::cout << "Float constructor has been called." << std::endl;
	store_fixed = (f / (1 << frac_bits_num));
}

Fixed&	Fixed::operator = (const Fixed &obj){
	std::cout << "Copy assignment operator overload has been called." << std::endl;
	this->store_fixed = obj.getRawBits();
	return (*this);
}

int		Fixed::toInt(void) const{
	return (store_fixed >> frac_bits_num);
}

float	Fixed::toFloat(void) const{
	return ((float)store_fixed / (1 << frac_bits_num));
}

void	Fixed::setRawBits(int const raw){
	this->store_fixed = raw;
}

int		Fixed::getRawBits(void) const{
	return (store_fixed);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    os << obj.store_fixed;
    return os;
}
