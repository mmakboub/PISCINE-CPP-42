/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:31:48 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/09 18:39:18 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"scavTrap.hpp"

ScavTrap::  ScavTrap(){
    this->_name = "none";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 10;
    std::cout << "Default constructor called" << std::endl;
}
ScavTrap::  ScavTrap(std::string name){
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 10;
    std::cout << "parametric constructor called" << std::endl;
}

ScavTrap::  ScavTrap(const ScavTrap &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}
ScavTrap &  ScavTrap::operator=( const ScavTrap &rhs ){
     std::cout << "COPY assignment operator called" << std::endl;
       if (this != &rhs) {
            this->_name = rhs._name;
            this->_hitPoints = rhs._hitPoints;
            this->_energyPoints = rhs._energyPoints;
            this->_attackDamage= rhs._attackDamage;
    }
    return *this;
}


void   ScavTrap::attack(const std::string& target){
    if(this->_hitPoints > 0 || this->_energyPoints > 0)
    {
        std::cout << " ScavTrap " << this->_name <<  " attacks " << target<< " causing " << this->_attackDamage << " points of damage " << std::endl;
        _energyPoints--;
    }
    else
        std::cout << " ScavTrap " << this->_name << " can't attack, it has no hit points or energy points left." << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is  in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "destracter is called "<< std::endl;
}