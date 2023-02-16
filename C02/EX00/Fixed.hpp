/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 01:53:27 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/16 02:12:24 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
#include <iostream>
#include <string>

class Fixed {
private:
    int _value;
    static const int _fractionalBits = 8;

public:
    Fixed();
    Fixed(const Fixed &src);
    ~Fixed();
    Fixed &operator=(Fixed const &rhs);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif