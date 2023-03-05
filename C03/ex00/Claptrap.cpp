/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:56:26 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/05 21:59:33 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Claptrap.hpp"



ClapTrap::ClapTrap(std::string name):_name(name) , _hitPoints(10) , _energyPoints(10), _attackDamage(10){
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &rhs ){
     std::cout << "COPY assignment operator called" << std::endl;
       if (this != &rhs) {
            this->_name = rhs.getName();
            this->_hitPoints = rhs.getHitPoints();
            this->_energyPoints = rhs.getEnergyPoints();
            this->_attackDamage= rhs.getAttachDamage();
    }
    return *this;
}

std::string ClapTrap::getName(void)const{
    return this->_name;
}
int ClapTrap::getHitPoints(void)const{
    return this->_hitPoints;
}

int ClapTrap::getEnergyPoints(void)const{
    return this->_energyPoints;
}

int ClapTrap::getAttachDamage(void)const{
    return this->_attackDamage;
}

void ClapTrap::attack(const std::string& target){
    if(this->_hitPoints == 0 || this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " can't attack, it has no hit points or energy points left." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name <<  " attacks " << target<< " causing " << this->_attackDamage << " points of damage " << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
    if(this->_hitPoints == 0 || this->_energyPoints == 0)
    {
        std::cout << "Sadly !! ClapTrap " << this->_name << " can't attack :| :| , it has no hit points or energy points left" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " takes " <<amount<< " points of damage" << std::endl;
     this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    if(this->_hitPoints == 0 || this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " can't attack, it has no hit points or energy points left." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << "is repaired for " <<amount<< " points of damage " << std::endl;
     this->_hitPoints += amount;
     _energyPoints--;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destracter is called "<< std::endl;
}