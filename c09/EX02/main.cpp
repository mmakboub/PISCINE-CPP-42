/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:13:43 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/25 21:48:18 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <map>
#include <limits.h>
std::string removeSpaces(std::string str)
{
	str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
	return str;
}
int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cout << "number of arguments is invalide" << std::endl;
        exit(0);
    }
        
    else{
        std::stack<int> stack;
        std::string arg = av[1];
        for(size_t i(0); i < arg.length(); i++ )
        {
            if(arg[i] == ' ')
                continue;
            if(isdigit(arg[i]))
            {
                int num = arg[i] - '0';
                stack.push(num);   
            }
            else if(arg[i] == '+' || arg[i] == '-' || arg[i] == '/' || arg[i] == '*')
            {
                if(stack.size() < 2)
                {
                    std::cout<< "your stack should contain 2 element" <<std::endl;
                    exit(0);
                }
                int num1 = stack.top();
                stack.pop();
                int num2 = stack.top();
                stack.pop();
                if(arg[i] == '+')
                    stack.push(num1 + num2);
                else if(arg[i] == '-')
                    stack.push(num2 - num1);
                else if(arg[i] == '*')
                    stack.push(num1 * num2);
                else if(arg[i] == '/')
                {
                    if(num1 == 0)
                    {
                        std::cout<< "can't divise 0 by a number" <<std::endl;
                        exit (0);
                    }
                    stack.push(num2 / num1);
                }
            }
            else
            {
                std::cout<< "Error" <<std::endl;
                exit(0);
            }
        }
        std::cout <<stack.top()<<std::endl;
    }    
}