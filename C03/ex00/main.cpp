/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:00:58 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/11 20:29:20 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("ClapTrap");
    ClapTrap clap2("ClapTrap2");

    std::cout << "ClapTrap " << clap.getName() << " has " << clap.getHitPoints() << " hit points" << std::endl;
    clap.attack(clap2.getName());
    clap2.takeDamage(clap.getAttackDamage());
    std::cout << "ClapTrap " << clap2.getName() << " has " << clap2.getHitPoints() << " hit points" << std::endl;

    clap2.attack(clap.getName());
    clap.takeDamage(clap2.getAttackDamage());
    std::cout << "ClapTrap " << clap.getName() << " has " << clap.getHitPoints() << " hit points" << std::endl;

    clap2.beRepaired(2);
    clap.beRepaired(3);
    std::cout << "ClapTrap " << clap.getName() << " has " << clap.getHitPoints() << " hit points and " << clap.getEnergyPoints() << " energy points" << std::endl;
    std::cout << "ClapTrap " << clap2.getName() << " has " << clap2.getHitPoints() << " hit points and " << clap2.getEnergyPoints() << " energy points" << std::endl;

    return 0;
}