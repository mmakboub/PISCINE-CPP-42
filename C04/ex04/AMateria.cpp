/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:04:30 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/19 21:33:34 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria( void ) 
{
    _type = "none";
    // std::cout << "Default constructor called for AMATERIA " << std::endl;
}

AMateria::AMateria( std::string const & type ): _type(type){
    // std::cout << "AMateria " << this->_type << " is created" << std::endl;
}

std::string const & AMateria::getType() const{
    return this->_type;
}
AMateria::AMateria( AMateria const &rhs ){
    //  std::cout << "Copy constructor called for animal" << std::endl;
    *this = rhs;
}

AMateria &AMateria::operator=( const AMateria &rhs ){
    // std::cout << " assignment operator called for Ice" << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

void    AMateria::use( ICharacter& target ){
    (void)target;
}
AMateria::~AMateria( void ){
    //   std::cout << "destracter is called for animal"<< std::endl;
}