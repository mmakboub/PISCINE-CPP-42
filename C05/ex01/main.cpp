/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:55:52 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/10 17:46:58 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
int main( void )
{

    try {
        Bureaucrat bureaucrat("mariam",11);
        Form form("mak", 10,12);
        form.beSigned(bureaucrat);
        std::cout<< bureaucrat;
        std::cout<< form;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
    try {
        Bureaucrat bureaucrat1("makboub",6);
        Form form1("mery", 10,15);
        form1.beSigned(bureaucrat1);
        std::cout<< bureaucrat1;
        std::cout<< form1;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    
}