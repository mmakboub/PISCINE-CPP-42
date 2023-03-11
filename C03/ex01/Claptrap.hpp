/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:56:31 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/09 17:56:41 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>
#include<string.h>

class ClapTrap{
    protected:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;   
    
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &src);
        void attack(const std::string& target);
        ClapTrap &operator=(const ClapTrap &rhs);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName(void)const;
        int getHitPoints(void)const;
        int getEnergyPoints(void)const;
        int getAttackDamage(void)const;
        ~ClapTrap();
};
#endif