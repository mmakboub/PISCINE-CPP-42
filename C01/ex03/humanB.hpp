/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:34:52 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/11 22:16:47 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.hpp"
#include <iostream>
#include<string>

class HumanB{
    private :

    std::string _name;
    Weapon *_weapon;
    public:
    HumanB(std::string name);
    void attack(void);
    void setWeapon(Weapon *weapon);
    ~HumanB();
    
};


#endif