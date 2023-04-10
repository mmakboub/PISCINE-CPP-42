/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:33:37 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/10 21:37:03 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"
Form *Intern::makeForm(std::string nameForm,std::string targetForme)
{
    int i = 0;
    std::string tab[]={"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
    Form *form[]={new ShrubberyCreationForm(targetForme), new RobotomyRequestForm(targetForme) , new PresidentialPardonForm(targetForme)};
    while(i < 3)
    {
        if(tab[i] == nameForm)
        {
            std::cout << "Intern creates " << nameForm << std::endl;
            return(form[i]);
        }
        i++;
    }
    return NULL;
}
Intern::Intern()
{
}

Intern::Intern(const Intern &src) {
    *this = src;
}
Intern &Intern::operator=( const Intern &rhs ){
    (void)rhs;
    return *this;
}

Intern::~Intern()
{
}