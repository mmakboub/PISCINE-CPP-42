/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 01:06:41 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/11 21:23:43 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
int main()
{
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);//takes references cause in human b it cat take in second parameter NULL     
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    return 0;
}