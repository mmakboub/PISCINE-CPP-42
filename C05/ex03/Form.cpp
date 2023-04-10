/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 01:32:11 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/10 20:43:16 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"

const char * Form::GradeTooHighException:: what() const throw(){
     return("Grade Is Too High");
}
const char * Form::GradeTooLowException:: what() const throw(){
    return("Grade Is Too Low");
}

Form::Form() : name("default"), sgrade(0), egrade(0){
    this->issigned = false;
    if(this->sgrade < 1 || this->egrade < 1)
         throw GradeTooLowException();
    if (this->sgrade > 150 || this->egrade > 150)
        throw GradeTooHighException();
}
Form & Form::operator=( Form const & rhs )
{
	if (this != &rhs)
		issigned = rhs.issigned;
	return (*this);
}
Form::Form( Form const & src ):name(src.name),sgrade(src.sgrade), egrade(src.egrade)
{
    this->issigned = src.issigned;
}
Form::Form(const std::string name, int sgrade, int egrade): name(name), sgrade(sgrade), egrade(egrade){

    this->issigned = false;
    if(this->sgrade < 1 || this->egrade < 1)
         throw GradeTooLowException();
    if (this->sgrade > 150 || this->egrade > 150)
        throw GradeTooHighException();
}

Form::~Form(){

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
    if(bureaucrat.getGrade() <= this->sgrade)
        this->issigned = true;
    else
        throw GradeTooLowException();
}
const char * Form::ExecFormExcep:: what() const throw(){
    return(" it Doesn't execute ");
}
std::ostream& operator<<(std::ostream& out, const Form& rhs)
{
    out <<rhs.getName() << ( rhs.isSigned() ? " Is Signed " : " Is Not Signed " ) <<"his Form Sgrade is " << rhs.getSgrade() << " and Egrade is " << rhs.getEgrade();
    return (out);
}