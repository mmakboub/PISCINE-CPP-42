/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:51:36 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/18 16:05:55 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
#include <iostream>
#include <cmath>
class Fixed{
    private:
        int _fixed;
        static const int _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed  & src);
        Fixed(const int  & src);
        Fixed(const float  & src);

        ~Fixed();
        void setRawBits( int const raw);
        int getRawBits( void ) const;
        Fixed &operator=(const Fixed &rhs);
        float toFloat( void ) const;
        int toInt( void ) const;

};
std::ostream& operator<<(std::ostream& out, const Fixed& fp);
#endif