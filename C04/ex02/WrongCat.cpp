/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:40:42 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/16 13:40:43 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
    _type = "WrongCat";
    std::cout << "Default constructor called for WrongCat " << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) {
    std::cout << "Copy constructor called for WrongCat" << std::endl;
    *this = src;
}
std::string WrongCat::getType(void)const{
    return this->_type;
}

WrongCat &WrongCat::operator=( const WrongCat &rhs ){
     std::cout << " assignment operator called for WrongCat" << std::endl;
       if (this != &rhs)
            this->_type = rhs.getType();
    return *this;
}
void WrongCat::makeSound() const {
    std::cout << "Miaoooooooow" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "destracter is called for WrongCat"<< std::endl;
}