/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:05:44 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/16 16:09:58 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
#include <iostream>
class Fixed{
    private:
        int _fixed;
        static const int _fractionalBits = 8;

    public:
        Fixed();
        Fixed(const Fixed  & src);
        ~Fixed();
        void setRawBits( int const raw);
        int getRawBits( void ) const;
        Fixed &operator=(const Fixed &rhs);
};
#endif