/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 01:12:20 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/11 01:42:43 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H
#include<iostream>
#include<string>

class Weapon
{
    
    private:
        std::string _type;
    
    public:
        Weapon();
        const std::string &getType(void)const;
        void setType(const std::string &newType);
        ~Weapon();
};
#endif