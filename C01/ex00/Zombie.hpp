/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:02:13 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/10 22:37:08 by mmakboub         ###   ########.fr       */
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
    Zombie( std::string name );
    void announce( void );
    ~Zombie();
};
Zombie  *newZombie( std::string name );
void randomChump( std::string name );
#endif