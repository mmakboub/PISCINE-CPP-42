/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:47:26 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/10 23:04:19 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
int main()
{
    Zombie *z1 = newZombie("zombie1");
    z1->announce();
    randomChump("Zombie2");
    delete z1;
    
}