/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 00:29:04 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/10 20:43:22 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <stdbool.h>
#include <iostream>
#include<string.h>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form{ 
    private:
        const std::string name;
        bool issigned;
        int sgrade;
        int egrade;
    public:
        Form();
        Form( Form const & src );
        Form &operator=( Form const & rhs );
        Form(const std::string name ,int sgrade, int egrade);
        const std::string getName(void)const;
        int getSgrade(void)const;        
        int getEgrade(void)const;        
        bool isSigned(void)const;
        void beSigned(const Bureaucrat& bureaucrat);
        virtual void execute(Bureaucrat const & var) const = 0;
        virtual ~Form();
    
        class GradeTooHighException: public std::exception{
            public:
                 virtual const char* what() const throw();
        };
        
        class GradeTooLowException: public std::exception{
            public:
                 virtual const char* what() const throw();
        };
        class ExecFormExcep: public std::exception{
            public:
                 virtual const char* what() const throw();
        };
};
std::ostream& operator<<(std::ostream& out, const Form& fp);
#endif