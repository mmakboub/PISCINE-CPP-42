/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:48:30 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/12 15:43:42 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H
#include "Weapon.hpp"
#include "humanB.hpp"
#include <iostream>
#include<string>

class HumanA{
    private :

        std::string _name;
        Weapon &_weapon;
    
    public:
    
        HumanA(std::string name, Weapon &weapon);
        void attack(void);
        ~HumanA();
    
};


#endif