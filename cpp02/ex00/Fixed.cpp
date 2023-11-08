#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor has been called." << std::endl;
	store_fixed = 0;
}

Fixed::Fixed(const Fixed &obj){
	std::cout << "Copy constructor has been called." << std::endl;
	*this = obj;
}

Fixed&	Fixed::operator = (const Fixed &obj){
	std::cout << "Copy assignment operator overload has been called." << std::endl;
	this->store_fixed = obj.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor has been called." << std::endl;
}

void	Fixed::setRawBits(int const raw){
	this->store_fixed = raw;
}

int		Fixed::getRawBits(void) const{
	std::cout << "getRawBits has been called." << std::endl;
	return (store_fixed);
}