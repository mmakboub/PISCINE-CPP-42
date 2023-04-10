/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 01:51:17 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/10 02:41:10 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include"Form.hpp"

class ShrubberyCreationForm: public Form{
    private:
    std::string target;
    public:
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm();
	std::string getTarget() const;
	void execute(const Bureaucrat& executor) const;
	ShrubberyCreationForm(const ShrubberyCreationForm& rhs);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);
	~ShrubberyCreationForm();
    
};
#endif