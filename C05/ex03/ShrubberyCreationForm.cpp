/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 01:51:19 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/10 20:45:23 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form( "ShrubberyCreationForm", 145, 137 ), target(target){
    
}
ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src){
    *this = src;
}
std::string ShrubberyCreationForm::getTarget( void ) const{
    return this->target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &rhs ){
     if(this != &rhs)
        this->target = rhs.getTarget();
    return *this;
}
void ShrubberyCreationForm::execute(const Bureaucrat& executor) const{
    if(this->isSigned() == false)
        throw Form::ExecFormExcep();
    if ( executor.getGrade() > this->getEgrade() )
        throw Form::GradeTooLowException();
    std::string file = getTarget() + "_shurbbery";
    std::ofstream outFile(file.c_str());
    if(outFile)
    {
        outFile << "          &&& &&  & &&\n";
        outFile << "      && &\\/&\\|& ()|/ @, &&\n";
        outFile << "      &\\/(/&/&||/& /_/)_&/_&\n";
        outFile << "   &() &\\/&|()|/&\\/ '%\" & ()\n";
        outFile << "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n";
        outFile << " &&   && & &| &| /& & % ()& /&&\n";
        outFile << " ()&_---()&\\&\\|&&-&&--%---()~\n";
        outFile << "     &&     \\|||\n";
        outFile << "             |||\n";
        outFile << "             |||\n";
        outFile << "             |||\n";
        outFile << "       , -=-~  .-^- _\n";
        outFile << "             `\"~~~\"`\n";
    }
    
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}