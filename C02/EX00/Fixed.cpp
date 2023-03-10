/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:21:47 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/16 19:04:03 by mmakboub         ###   ########.fr       */
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
int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixed;
}
void Fixed::setRawBits( int const raw ){
    this->_fixed = raw;
}

Fixed &Fixed::operator=( const Fixed &rhs ){
     std::cout << "COPY assignment operator called" << std::endl;
        this->_fixed = rhs.getRawBits();
        return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}