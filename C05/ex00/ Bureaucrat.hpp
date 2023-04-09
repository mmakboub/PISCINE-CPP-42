/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Bureaucrat.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:33:03 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/08 22:51:12 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include<string.h>
#include <exception>

class Bureaucrat{ 
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name ,int garde);
        const std::string getName(void)const;
        int getGrade(void)const;        
        ~Bureaucrat();
        
        void IncrementGrade();
        void DecrementGrade();
    
        class GradeTooHighException: public std::exception{
            public:
                 virtual const char* what() const throw();
        };
        
        class GradeTooLowException: public std::exception{
            public:
                 virtual const char* what() const throw();
        };
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& fp);
#endif