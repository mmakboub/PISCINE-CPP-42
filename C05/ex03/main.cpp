/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:55:52 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/10 21:40:20 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"Intern.hpp"

int main( void )
{
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("rdhfjg", "Bender");
    delete rrf;
    // try {
    //     Bureaucrat bureaucrat("bureaucrat", 40); // error with 200
    //     PresidentialPardonForm formPr("President");
    //     RobotomyRequestForm formRo("Robotomy");
    //     ShrubberyCreationForm formSh("Shrubbery");

    //     bureaucrat.signForm(formPr);
    //     bureaucrat.executeForm(formPr);
    //     bureaucrat.signForm(formRo);
    //     bureaucrat.executeForm(formRo);
    //     bureaucrat.executeForm(formRo);
    //     bureaucrat.executeForm(formRo);
    //     bureaucrat.signForm(formSh);
    //     bureaucrat.executeForm(formSh);
    // } catch (std::exception &e) {
    //     std::cout << e.what() << std::endl;
    // }
}