/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:32:53 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/08 23:17:47 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include" Bureaucrat.hpp"
Bureaucrat::Bureaucrat() : name("default"), grade(40){
    std::cout<< "Default constracter is called"<<std::endl;
    if(this->grade < 1)
         throw GradeTooLowException();
    if (this->grade > 150)
        throw GradeTooHighException();
}
Bureaucrat::Bureaucrat(const std::string name, int grade): name(name), grade(grade){
    std::cout<< "Constracter is called"<<std::endl;
    if(this->grade < 1)
         throw GradeTooLowException();
    if (this->grade > 150)
        throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat(){
    std::cout<< "Destracter is called"<<std::endl;
}

 const std::string Bureaucrat::getName() const {
        return this->name;
    }

int Bureaucrat::getGrade() const {
    return this->grade;
 }

void Bureaucrat::IncrementGrade(){
    if (this->grade < 1)
        throw GradeTooLowException();
    this->grade--;
}

void Bureaucrat::DecrementGrade(){
    if (this->grade > 150)
        throw GradeTooHighException();
    this->grade++;
}
const char * Bureaucrat::GradeTooHighException:: what() const throw(){
     return("Grade Is Too High");
}
const char * Bureaucrat::GradeTooLowException:: what() const throw(){
    return("Grade Is Too Low");
}
std::ostream& operator<<(std::ostream& out, const Bureaucrat& rhs)
{
    out << rhs.getName() << "bureaucrat grade is " << rhs.getGrade() << std::endl;
    return (out);
}


