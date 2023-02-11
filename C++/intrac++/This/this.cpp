/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   this.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:11:57 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/01 16:31:53 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "this.hpp"

cinstanc::cinstanc(void){
    std::cout << "constracter called" << std::endl;
    this->foo = 42;// this est un poointeur qui pointe sur l instance courante est pourquoi fleche parceque this est un pointeur;
    std::cout << "this->foo: " << this->foo << std::endl;
    this->bar();
    return;
}

cinstanc::~cinstanc(void){
    std::cout << "destracter called" << std::endl;
    return ;
}

void cinstanc::bar(void)
{
    std::cout << "memeber function bar called" << std::endl;
    return ;
}
int main()
{
    cinstanc instanc;
    return 0;
}