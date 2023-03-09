/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:40:01 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/09 18:42:16 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
 
#include <iostream>
#include <string>
#include"Claptrap.hpp"
 
class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
       ScavTrap(std::string name);
       ScavTrap(const ScavTrap &src);
        void attack(const std::string& target);
       ScavTrap &operator=(const ScavTrap &rhs);
        ~ScavTrap();
        void guardGate();
};
 
#endif