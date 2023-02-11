/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:52:28 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/01 16:59:45 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "init.hpp"

cinstanc::cinstanc(char p1,int p2, float p3) : a1(p1), a2(p2), a3(p3) { //cette initialisation s apelle initialisation d une liste
    std::cout << "constracter called" << std::endl;
    std::cout << "this->a1: " << this->a1<< std::endl;
    std::cout << "this->a2: " << this->a2 << std::endl;
    std::cout << "this->a3: " << this->a2 << std::endl;
    return;
}

cinstanc::~cinstanc(void){
    std::cout << "destracter called" << std::endl;
    return ;
}

int main()
{
    cinstanc instanc1('a', 42, 4.2f );
    cinstanc instanc2('z', 13, 3.14f );
    return 0;
}