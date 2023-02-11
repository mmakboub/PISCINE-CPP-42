/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 01:40:52 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/11 20:51:22 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string &type): _type(type){
}

void Weapon::setType(const std::string &newType) {
    this->_type = newType;
}
std::string const &Weapon::getType(void)const{
    return this->_type;
}
Weapon::~Weapon(){
}
