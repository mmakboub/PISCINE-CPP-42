/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:32:26 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/19 21:19:26 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure( ):  AMateria("cure"){
    // std::cout << "Default constructor called for Cure " << std::endl;
}

Cure::Cure(const Cure &src) {
    // std::cout << "Copy constructor called for Cure" << std::endl;
    *this = src;
}
Cure &Cure::operator=( const Cure &rhs){
    // std::cout << " assignment operator called for Cure" << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}
AMateria* Cure::clone() const{
    return new Cure(*this);
}
void Cure::use(ICharacter& target) {
        std::cout << "*heals " << target.getName() << "'s wounds *" <<std::endl;
 }
Cure::~Cure()
{
    // std::cout << "destracter is called for Cure"<< std::endl;
}