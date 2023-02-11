/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:46:20 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/11 00:58:59 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

int main()
{
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string &stringREF = var;

    std::cout << &stringREF << std::endl; // L’adresse stockée dans stringREF
    std::cout << &var<< std::endl; //  L’adresse de la string en mémoire
    std::cout << stringPTR << std::endl; // • L’adresse stockée dans stringPTR.
    
    std::cout << *stringPTR << std::endl; // value
    std::cout << var<< std::endl ;//value;
    std::cout << stringREF<< std::endl; 
}