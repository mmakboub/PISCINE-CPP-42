/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:26:17 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/11 00:43:03 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include<iostream>
#include<string>
class Zombie
{
    
private:
    std::string _name;

public:
    Zombie();
    void setZombie(std::string name);
    void announce( void );
    ~Zombie();
};
Zombie *zombieHorde( int N, std::string name );
#endif