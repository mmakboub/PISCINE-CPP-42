/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:19:41 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/18 23:26:56 by mmakboub         ###   ########.fr       */
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
        
        float toFloat( void ) const;
        int toInt( void ) const;
        
        Fixed &operator=(const Fixed &rhs);
        Fixed operator+(const Fixed &rhs)const;
        Fixed operator-(const Fixed &rhs)const;
        Fixed operator*(const Fixed &rhs)const;
        Fixed operator/(const Fixed &rhs)const;


        bool operator==(const Fixed& c1) const;
        bool operator>=(const Fixed& c1)const;
        bool operator<=(const Fixed& c1)const;
        bool operator!=(const Fixed& c1)const;
        bool operator>(const Fixed& c1)const;
        bool operator<(const Fixed& c1)const;


        //prefix increment and decrement
        Fixed& operator++();
        Fixed& operator--();

        //postfix increment and decrement

        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed const & min(Fixed const & a, Fixed const & b);
        static Fixed const & max(Fixed const & a, Fixed const & b);

        static Fixed& min(Fixed &a, Fixed& b);
        static Fixed& max(Fixed &a, Fixed& b);
        

};
std::ostream& operator<<(std::ostream& out, const Fixed& fp);
#endif