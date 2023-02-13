/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:09:37 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/13 18:46:19 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#ifndef HARL_H
#define HARL_H

class Harl{
    
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public:

        Harl();
        void complain( std::string level);
        ~Harl();
        
};

#endif