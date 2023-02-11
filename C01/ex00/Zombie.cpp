/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:15:14 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/11 21:19:06 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie(){
}

Zombie::Zombie( std::string name ){_name = name;}

Zombie::~Zombie(){
    std::cout << this->_name << " is died " << std::endl;
}

void Zombie::announce(void)
{
     std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

