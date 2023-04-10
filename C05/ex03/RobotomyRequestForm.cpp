/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:01:01 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/10 20:43:49 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RobotomyRequestForm.hpp"
#include <cstdlib> // pour la fonction rand()
#include <ctime> 

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form( "RobotomyRequestForm", 72, 45 ), target(target){
    srand(time(NULL));
}
RobotomyRequestForm::RobotomyRequestForm()
{
    srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src){
    *this = src;
}
std::string RobotomyRequestForm::getTarget( void ) const{
    return this->target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &rhs ){
    if(this != &rhs)
        this->target = rhs.getTarget();
    return *this;
}
void RobotomyRequestForm::execute(const Bureaucrat& executor) const{
    if(this->isSigned() == false)
        throw Form::ExecFormExcep();
    if ( executor.getGrade() > this->getEgrade() )
        throw Form::GradeTooLowException();
    std::cout <<  "Zzzzzzzzzzzzzzzzzzzzzzzzz " << std::endl;
    int i = rand();
    if(i % 2 == 0)
        std::cout <<  target << "has been robotized" << std::endl;
    else
        std::cout << target << "has failed to be robotized" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}