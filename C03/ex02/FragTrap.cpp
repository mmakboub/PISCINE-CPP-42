/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:05:18 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/09 19:10:30 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap:: FragTrap(){
    this->_name = "none";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 10;
    std::cout << "Default constructor called" << std::endl;
}
FragTrap::  FragTrap(std::string name){
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 10;
    std::cout << "parametric constructor called" << std::endl;
}

FragTrap::  FragTrap(const FragTrap &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}
FragTrap &  FragTrap::operator=( const FragTrap &rhs ){
     std::cout << "COPY assignment operator called" << std::endl;
       if (this != &rhs) {
            this->_name = rhs._name;
            this->_hitPoints = rhs._hitPoints;
            this->_energyPoints = rhs._energyPoints;
            this->_attackDamage= rhs._attackDamage;
    }
    return *this;
}


void   FragTrap::attack(const std::string& target){
    if(this->_hitPoints > 0 || this->_energyPoints > 0)
    {
        std::cout << " FragTrap " << this->_name <<  " attacks " << target<< " causing " << this->_attackDamage << " points of damage " << std::endl;
        _energyPoints--;
    }
    else
        std::cout << " FragTrap " << this->_name << " can't attack, it has no hit points or energy points left." << std::endl;
}
void FragTrap:: highFivesGuys()
{
    std::cout << "FragTrap" << this->_name << " demand high fives" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "destracter is called "<< std::endl;
}