/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:33:12 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/10 21:39:20 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include"Form.hpp"
#include"PresidentialPardonForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"

class Intern{
    public:
        Intern();
        Intern(const Intern  & src);
        ~Intern();
        Intern &operator=(const Intern &rhs);
        Form *makeForm(const std::string nameForm, const std::string targetForme);
};
#endif