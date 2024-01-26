#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    store_fixed = 0;
}

Fixed::Fixed(const Fixed &obj){
    std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const int i){
    std::cout << "Int constructor has been called." << std::endl;
	store_fixed = i << frac_bits_num;
}

Fixed::Fixed(const float f){
    std::cout << "Float constructor has been called." << std::endl;
	store_fixed = roundf(f * (1 << frac_bits_num));
}

Fixed::~Fixed(){
    std::cout << "Destructor has been called." << std::endl;
}

int		Fixed::toInt(void) const{
	return (store_fixed >> frac_bits_num);
}

float	Fixed::toFloat(void) const{
	return ((float)store_fixed / (1 << frac_bits_num));
}

Fixed   Fixed::operator+(const Fixed &a)const{
    Fixed result;
    result.store_fixed = this->store_fixed + a.store_fixed;
    return (result.toFloat());
}
Fixed   Fixed::operator-(const Fixed &a)const{
    Fixed result;
    result.store_fixed = this->store_fixed - a.store_fixed;
    return (result.toFloat());
}

Fixed&	Fixed::operator=(const Fixed &obj){
	std::cout << "Copy assignment operator overload has been called." << std::endl;
	this->store_fixed = obj.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const{
	return (store_fixed);
}

Fixed   Fixed::operator*(const Fixed &a) const{
    Fixed   result;
    result.store_fixed = (this->store_fixed * a.store_fixed) / (1 << frac_bits_num);
    return (result);
}

Fixed   Fixed::operator/(const Fixed &a) const{
    Fixed   result;
    result.store_fixed = (this->store_fixed / a.store_fixed) * (1 << frac_bits_num);
    return (result);
}

Fixed   Fixed::operator++(){
    store_fixed += 1;
    return (*this);
}

Fixed   Fixed::operator--(){
    store_fixed -= 1;
    return (*this);
}

Fixed   Fixed::operator++(int){
    Fixed   obj(*this);
    store_fixed += 1;
    return (obj);
}

Fixed   Fixed::operator--(int){
    Fixed   obj(*this);
    store_fixed -= 1;
    return (obj);
}

bool    Fixed::operator>(const Fixed &a){
    if (this->store_fixed > a.store_fixed)
        return 1;
    return 0;
}
bool    Fixed::operator<(const Fixed &a){
    if (this->store_fixed < a.store_fixed)
        return 1;
    return 0;
}
bool    Fixed::operator>=(const Fixed &a){
    if (this->store_fixed >= a.store_fixed)
        return 1;
    return 0;
}
bool    Fixed::operator<=(const Fixed &a){
    if (this->store_fixed <= a.store_fixed)
        return 1;
    return 0;
}
bool    Fixed::operator==(const Fixed &a){
    if (this->store_fixed == a.store_fixed)
        return 1;
    return 0;
}
bool    Fixed::operator!=(const Fixed &a){
    if (this->store_fixed != a.store_fixed)
        return 1;
    return 0;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b){
    if (a.store_fixed < b.store_fixed)
        return a;
    else
        return b;
}
const Fixed	&Fixed::min(const Fixed &a, const Fixed &b){
    if (a.store_fixed < b.store_fixed)
        return a;
    else
        return b;
}
Fixed	&Fixed::max(Fixed &a, Fixed &b){
    if (a.store_fixed > b.store_fixed)
        return a;
    else
        return b;
}
const Fixed	&Fixed::max(const Fixed &a, const Fixed &b){
    if (a.store_fixed > b.store_fixed)
        return a;
    else
        return b;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    os << obj.toFloat();
    return os;
}
