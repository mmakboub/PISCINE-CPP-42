/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:19:28 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/10 21:13:34 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

Harl::Harl(){
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do ! "<< std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"<< std::endl;
}

void Harl::warning(void)
{
        std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<< std::endl;
}

void Harl::error(void)
{
        std::cout << "This is unacceptable ! I want to speak to the manager now."<< std::endl;
}

Harl::~Harl(){
    
}

void Harl::complain(std::string level)
{
    std::string tab[4]={"DEBUG", "INFO", "WARNING", "ERROR"}; //tableau de chaînes de caractères.contient les noms des différents niveaux de plainte que Harl peut faire : "debug", "info", "warning" et "error".
    //Ce tableau de chaînes de caractères sera utilisé par la fonction complain pour trouver le niveau de plainte passé en paramètre et appeler la fonction membre correspondante en utilisant le tableau de pointeurs sur fonctions membres
    void (Harl::*HarlFunctionPointer[4])()={&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};// Déclaration du tableau de pointeurs sur des fonctions membres qui stocke les adresses des quatre fonctions membres de la classe Harl : debug(), info(), warning() et error(). Chacun de ces pointeurs représente une fonction membre de la classe Harl.
    for(int i=0; i <4 ; i++)
    {
        if(tab[i] == level)
        {
            (this->*HarlFunctionPointer[i])();
            break;
        }
    }
}