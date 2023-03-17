/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:16:19 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/17 19:51:24 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal( ):  _type( "Animal" ){
    std::cout << "Default constructor called for animal " << std::endl;
}

Animal::Animal(const Animal &src) {
    std::cout << "Copy constructor called for animal" << std::endl;
    *this = src;
}
std::string Animal::getType(void)const{
    return this->_type;
}

Animal &Animal::operator=( const Animal &rhs ){
     std::cout << " assignment operator called for animal" << std::endl;
       if (this != &rhs)
            this->_type = rhs.getType();
    return *this;
}

Animal::~Animal()
{
    std::cout << "destracter is called for animal"<< std::endl;
}