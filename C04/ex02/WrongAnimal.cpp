/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:38:57 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/16 14:14:20 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal( ):  _type( "WrongAnimal" ){
    std::cout << "Default constructor called for WrongAnimal " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
    std::cout << "Copy constructor called for WrongAnimal" << std::endl;
    *this = src;
}
std::string WrongAnimal::getType(void)const{
    return this->_type;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &rhs ){
     std::cout << " assignment operator called for WrongAnimal" << std::endl;
       if (this != &rhs)
            this->_type = rhs.getType();
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "destracter is called for WrongAnimal"<< std::endl;
}
void WrongAnimal::makeSound() const
{
}