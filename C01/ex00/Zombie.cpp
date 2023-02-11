/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:15:14 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/10 23:12:25 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie is created " << std::endl;
}

Zombie::Zombie( std::string name )
{
    std::cout << "parametric constracter is called " << std::endl;
    _name = name;
    
}

Zombie::~Zombie(){
    std::cout << this->_name << " is died " << std::endl;
}

void Zombie::announce(void)
{
     std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

