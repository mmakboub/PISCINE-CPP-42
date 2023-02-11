/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:25:20 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/11 00:43:29 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
Zombie *zombieHorde( int N, std::string name )
{
    Zombie *zombies = new Zombie[N];
    for(int i(0); i < N; i++)
    {
        zombies[i].setZombie(name);
        zombies[i].announce();
    }
    return(zombies);
}