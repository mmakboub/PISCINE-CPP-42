/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:04:15 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/11 00:42:49 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie is created " << std::endl;
}

void Zombie::setZombie(std::string name) {
    this->_name = name;
}

Zombie::~Zombie(){
    std::cout << this->_name << " is died " << std::endl;
}

void Zombie::announce(void)
{
     std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
