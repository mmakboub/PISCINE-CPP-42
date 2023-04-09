/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:55:52 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/09 01:18:23 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include" Bureaucrat.hpp"
int main(){
    try{
        Bureaucrat("mariam", 200);
    }
    catch(std::exception& e)
    {
        std::cout << "exception is: " << e.what() << std::endl;
    }
    try{
        Bureaucrat("mari", -9);
    }
    catch(std::exception& e)
    {
        std::cout << "exception is: " << e.what() << std::endl;
    }
    // Bureaucrat brcrt("bureaucrat", 55);
    // std::cout << brcrt; 
    // brcrt.IncrementGrade();
    // std::cout << brcrt;

    return 0;
}