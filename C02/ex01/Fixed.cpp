/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:51:39 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/17 00:54:28 by mmakboub         ###   ########.fr       */
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
    *this = src;
}

Fixed::Fixed(const float &src) {
    std::cout << "Float constructor called" << std::endl;
    *this = src;
}
int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixed;
}
void Fixed::setRawBits( int const raw ){
    this->_fixed = raw;
}

Fixed &Fixed::operator=( const Fixed &rhs ){
     std::cout << "copy assignment operator called" << std::endl;
        this->_fixed = rhs.getRawBits();
        return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}