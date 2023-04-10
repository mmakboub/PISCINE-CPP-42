/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:34:11 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/10 17:44:15 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include"Form.hpp"

class PresidentialPardonForm: public Form{
    private:
    std::string target;
    public:
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm();
	std::string getTarget() const;
	void execute(const Bureaucrat& executor) const;
	PresidentialPardonForm(const PresidentialPardonForm& rhs);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);
	~PresidentialPardonForm();
};
#endif