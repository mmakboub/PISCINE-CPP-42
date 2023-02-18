/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:05:22 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/18 23:52:14 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
   this-> _fixed = 0;
}

Fixed::Fixed(const Fixed &src) {
    *this = src;
}

Fixed::Fixed(const int &src) {
    this->_fixed = src << _fractionalBits;

}

Fixed::Fixed(const float &src) {
    this->_fixed = roundf(src * (1 << _fractionalBits));
}

int Fixed::getRawBits( void ) const{
    return this->_fixed;
}

void Fixed::setRawBits( int const raw ){
    this->_fixed = raw;
}


float Fixed::toFloat( void )const{
    float floatValue = (float)this->_fixed / (1 << this->_fractionalBits);  // Conversion en nombre à virgule flottante
    return(floatValue);
}

int Fixed::toInt( void ) const{
    int intvalue = this->_fixed >> this->_fractionalBits;
    return (intvalue);
}

Fixed &Fixed::operator=( const Fixed &rhs ){
    if(this != &rhs)
        this->_fixed = rhs.getRawBits();
    return *this;
}

Fixed   Fixed::operator+(const Fixed &rhs) const
{
    return (Fixed(toFloat() + rhs.toFloat()));
}

Fixed   Fixed::operator-(const Fixed &rhs) const
{
    return (Fixed(toFloat() - rhs.toFloat()));
}

Fixed   Fixed::operator*(const Fixed &rhs) const
{
    return (Fixed(toFloat() * rhs.toFloat()));
}
Fixed   Fixed::operator/(const Fixed &rhs) const
{
    return (Fixed(toFloat() / rhs.toFloat()));
}
bool Fixed::operator==(const Fixed& c1)const
{
    return(this->_fixed == c1.getRawBits());
}

bool Fixed::operator>=(const Fixed& c1)const
{
    return(this->_fixed >= c1.getRawBits());
}
bool Fixed::operator!=(const Fixed& c1)const
{
    return(this->_fixed != c1.getRawBits());
}
bool Fixed::operator<=(const Fixed& c1)const
{
    return(this->_fixed <= c1.getRawBits());
}
bool Fixed::operator>(const Fixed& c1)const
{
    return(this->_fixed > c1.getRawBits());
}
bool Fixed::operator<(const Fixed& c1)const
{
    return(this->_fixed < c1.getRawBits());
}
std::ostream& operator<<(std::ostream& out, const Fixed& rhs)
{
    out << rhs.toFloat();
    return (out);
}
Fixed& Fixed::operator++(void){
    this->_fixed++;
    return *this; 
}

Fixed& Fixed::operator--(void){
   this->_fixed--;
    return *this; // return new value by reference
}

Fixed Fixed::operator--(int){
    Fixed old = *this;
    old.operator--();
    return(*this);
}

Fixed Fixed::operator++(int){
    Fixed old = *this; // copy old value
    old.operator++();  // prefix decrement
    return(*this);    // return old value
}

Fixed& Fixed::min(Fixed &a, Fixed& b){
    if (a <= b) 
        return a;
    else 
        return b;
}

Fixed& Fixed::max(Fixed &a, Fixed& b){
    if (a <= b) 
        return b;
    else 
        return a;
}

Fixed const &Fixed::min(Fixed const & a, Fixed const & b){
     if (a <= b) 
        return a;
    else 
        return b;
    
}
Fixed const &Fixed::max(Fixed const & a, Fixed const & b){
     if (a <= b) 
        return b;
    else 
        return a;
        
}

Fixed::~Fixed()
{
}

