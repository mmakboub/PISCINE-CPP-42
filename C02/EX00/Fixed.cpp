/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:21:47 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/16 02:22:08 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
    _value = 0;
}

Fixed::Fixed(const Fixed &src) {
    _value = src._value;
}
int Fixed::getRawBits( void ) const{
    return this->_value;
}
void Fixed::setRawBits( int const raw ){
    this->_value = raw;
}


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}