/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 01:40:52 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/11 01:47:17 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << "Weapon is created " << std::endl;
}

void Weapon::setType(const std::string &newType) {
    this->_type = newType;
}
const std::string &Weapon::getType(void)const{
    return this->_type;
}
Weapon::~Weapon(){
}
