/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:50:48 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/12 15:50:14 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon): _name(name) , _weapon(Weapon){
};


void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType()<< std::endl;
}
HumanA::~HumanA(){
}