/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:02:00 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/11 22:58:44 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanB.hpp"

HumanB::HumanB(std::string name): _name(name){
};

void setWaepon(Weapon *weapon)
{
    this->&_weapon = weapon;
}