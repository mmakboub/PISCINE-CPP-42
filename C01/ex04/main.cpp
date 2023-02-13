/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:28:20 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/13 22:16:03 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

int main(int ac, char **av)
{
    if(ac != 2)
        std::cout << "error: incorrect number of arguments" << std::endl;
    else
    {
        std::ofstream ofs;
        ofs.open(av[1]);
        if(!ofs.good())
        {
            std::cout << "Error: Unable to open file " << av[1] << std::endl;
            exit(EXIT_FAILURE);
        }
        ofs.close();
        std::ofstream ifs;
        std::string replaceFile = std::string(av[1]) + ".replace";
        ifs.open(replaceFile);
        if (!ifs.good()) {
            std::cout << "Error: Unable to create file " << replaceFile << std::endl;
            return 1;
        }
        ifs.close();
    }
}