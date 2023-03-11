/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:35:54 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/11 20:30:00 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap obj1("Scav_1");
    ScavTrap obj2("Scav_2");

    obj1.attack("Scav_1");
    obj1.beRepaired(10);
    obj1.attack("Scav_1");
    obj1.attack("Scav_1");
    obj2.takeDamage(1000);
    obj2.attack("Scav_2");
    obj2.guardGate();

    return 0;
}