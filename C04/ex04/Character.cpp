/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:15:54 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/19 21:17:36 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string const & name ) : _name(name)
{
    int i = 0;
    while(i < 4)
    {
        this->_inventory[i] = NULL;
        i++;
    }
}

Character::Character( Character const & src ) : _name(src._name)
{
    *this = src;
}

Character& Character::operator=( Character const & rhs )
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
         int i = 0;
    while(i < 4)
    {
        if (this->_inventory[i])
			delete this->_inventory[i];
        this->_inventory[i] = rhs._inventory[i];
        i++;
    }
    }
    return *this;
}

std::string const& Character::getName() const {
    return this->_name;
}

void    Character::equip( AMateria* m ) {
    int i = 0;
    while(i < 4)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            return;
        }
        i++;
    }
}

void    Character::unequip( int idx ) {
    if (this->_inventory[idx] && idx >= 0 && idx < 4 )
    {
        delete this->_inventory[idx];
        this->_inventory[idx] = NULL;
        return ;
    }
}

void    Character::use( int idx, ICharacter& target ) {
    if (this->_inventory[idx] && idx >= 0 && idx < 4)
    {
        this->_inventory[idx]->use(target);
        return ;
    }
}
Character::~Character()
{
    int i = 0;
    while(i < 4)
    {
        if (this->_inventory[i])
			delete this->_inventory[i];
        i++;
    }
}