/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:00:54 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/10 17:25:19 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include"Form.hpp"

class RobotomyRequestForm: public Form{
    private:
    std::string target;
    public:
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm();
	std::string getTarget() const;
	void execute(const Bureaucrat& executor) const;
	RobotomyRequestForm(const RobotomyRequestForm& rhs);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);
	~RobotomyRequestForm();
    
};
#endif