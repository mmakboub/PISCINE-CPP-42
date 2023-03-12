/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:31:22 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/12 21:16:33 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
    _type = "Dog";
    std::cout << "Default constructor called for Dog " << std::endl;
}

Dog::Dog(const Dog &src) {
    std::cout << "Copy constructor called for Dog" << std::endl;
    *this = src;
}
std::string Dog::getType(void)const{
    return this->_type;
}

Dog &Dog::operator=( const Dog &rhs ){
     std::cout << " assignment operator called for Dog" << std::endl;
       if (this != &rhs)
            this->_type = rhs.getType();
    return *this;
}
void Dog::makeSound() const {
    std::cout << "Bouuuuu" << std::endl;
}
Dog::~Dog()
{
    std::cout << "destracter is called for Dog"<< std::endl;
}