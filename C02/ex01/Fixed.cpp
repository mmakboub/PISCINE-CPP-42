/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:51:39 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/18 18:15:43 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
   this-> _fixed = 0;

}

Fixed::Fixed(const Fixed &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(const int &src) {
    std::cout << "Int constructor called" << std::endl;
    this->_fixed = src << _fractionalBits;

}

Fixed::Fixed(const float &src) {
    std::cout << "Float constructor called" << std::endl;
    this->_fixed = roundf(src * (1 << _fractionalBits));
}

int Fixed::getRawBits( void ) const{
    return this->_fixed;
}

void Fixed::setRawBits( int const raw ){
    this->_fixed = raw;
}

Fixed &Fixed::operator=( const Fixed &rhs ){
    if(this != &rhs)
        this->_fixed = rhs.getRawBits();
     std::cout << "copy assignment operator called" << std::endl;
    return *this;
}

float Fixed::toFloat( void )const{
    float floatValue = (float)this->_fixed / (1 << this->_fractionalBits);  // Conversion en nombre à virgule flottante
    return(floatValue);
}

int Fixed::toInt( void ) const{
    int intvalue = this->_fixed >> this->_fractionalBits;
    return (intvalue);
}

std::ostream& operator<<(std::ostream& out, const Fixed& rhs)
{
    out << rhs.toFloat();
    return (out);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}