/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 01:32:11 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/09 01:53:37 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"Form.hpp"


Form::Form() : name("default"), sgrade(0), egrade(0){
    std::cout<< "Default constracter is called"<<std::endl;
    this->issigned = false;
    if(this->sgrade < 1 || this->egrade < 1)
         throw GradeTooLowException();
    if (this->sgrade > 150 || this->egrade < 150)
        throw GradeTooHighException();
}
Form::Form(const std::string name, int sgrade, int egrade): name(name), sgrade(sgrade), egrade(egrade){
    std::cout<< "Constracter is called"<<std::endl;
    this->issigned = false;
    if(this->sgrade < 1 || this->egrade < 1)
         throw GradeTooLowException();
    if (this->sgrade > 150 || this->egrade < 150)
        throw GradeTooHighException();
}

Form::~Form(){
    std::cout<< "Destracter is called"<<std::endl;
}

 const std::string Form::getName() const {
        return this->name;
    }

int Form::getSgrade() const {
    return this->sgrade;
 }
 int Form::getEgrade() const {
    return this->egrade;
 }
bool Form::isSigned(void)const{
    return this->issigned;
}
void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if(bureaucrate.getGrade() <= this->sgrade)
        this->issigned = true
    else
        throw GradeTooLowException();
}
std::ostream& operator<<(std::ostream& out, const Form& rhs)
{
    out << rhs.getName() << "Form grade is " << rhs.getGrade() << std::endl;
    return (out);
}