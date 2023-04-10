/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 01:51:13 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/10 20:43:37 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"
#include<math.h>

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form( "PresidentialPardonForm", 25,5 ), target(target){
    
}
PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src){
    *this = src;
}
std::string PresidentialPardonForm::getTarget( void ) const{
    return this->target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &rhs ){
    if(this != &rhs)
        this->target = rhs.getTarget();
    return *this;
}
void PresidentialPardonForm::execute(const Bureaucrat& executor) const{
    if(this->isSigned() == false)
        throw Form::ExecFormExcep();
    if ( executor.getGrade() > this->getEgrade() )
        throw Form::GradeTooLowException();
    std::cout << target << "as been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}