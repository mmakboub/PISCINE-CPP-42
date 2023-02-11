/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classinstanc.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:51:37 by mmakboub          #+#    #+#             */
/*   Updated: 2023/01/31 22:11:36 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "classinstanc.hpp"

cinstanc::cinstanc(void){
    std::cout << "constracter called" << std::endl;
    return;
}

cinstanc::~cinstanc(void){
    std::cout << "destracter called" << std::endl;
    return ;
}

int main()
{
    cinstanc instanc;
    return 0;
}