/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:26:24 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/16 16:43:04 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
Cat::Cat(): Animal(){
    this->brain = new Brain();
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
       {
        this->brain = new Brain();
        this->_type = rhs.getType();
       }
    return *this;
}
void Cat::makeSound() const {
    std::cout << "Miaoooooooow" << std::endl;
}
Cat::~Cat()
{
    delete this->brain;
    std::cout << "destracter is called for Cat"<< std::endl;
}