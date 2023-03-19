/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:50:47 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/19 21:21:21 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice( ):  AMateria("ice"){
    // std::cout << "Default constructor called for Ice " << std::endl;
}

Ice::Ice(const Ice &src) {
    // std::cout << "Copy constructor called for Ice" << std::endl;
    *this = src;
}
Ice &Ice::operator=( const Ice &rhs ){
    // std::cout << " assignment operator called for Ice" << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}
AMateria* Ice::clone() const{
    return new Ice(*this);
}
void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() <<  " * "<<std::endl;
}
Ice::~Ice()
{
    // std::cout << "destracter is called for Ice"<< std::endl;
}