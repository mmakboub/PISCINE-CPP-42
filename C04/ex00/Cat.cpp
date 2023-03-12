/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:26:24 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/12 21:16:19 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
    _type = "Cat";
    std::cout << "Default constructor called for Cat " << std::endl;
}

Cat::Cat(const Cat &src) {
    std::cout << "Copy constructor called for Cat" << std::endl;
    *this = src;
}
std::string Cat::getType(void)const{
    return this->_type;
}

Cat &Cat::operator=( const Cat &rhs ){
     std::cout << " assignment operator called for Cat" << std::endl;
       if (this != &rhs)
            this->_type = rhs.getType();
    return *this;
}
void Cat::makeSound() const {
    std::cout << "Miaoooooooow" << std::endl;
}
Cat::~Cat()
{
    std::cout << "destracter is called for Cat"<< std::endl;
}