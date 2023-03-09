/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:35:54 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/09 19:19:50 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

 int main() {
    FragTrap fragtrap1("Fraggy");
    FragTrap fragtrap2(fragtrap1);
    FragTrap fragtrap3;

    std::cout << "----" << std::endl;

    fragtrap3 = fragtrap1;

    std::cout << "----" << std::endl;

    fragtrap1.attack("enemy1");
    fragtrap2.attack("enemy2");

    std::cout << "----" << std::endl;

    fragtrap1.highFivesGuys();

    std::cout << "----" << std::endl;
    return 0;
}