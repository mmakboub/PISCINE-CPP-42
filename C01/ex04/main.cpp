/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:28:20 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/13 23:52:43 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

int main(int ac, char **av)
{
    if(ac != 4)
        std::cout << "error: incorrect number of arguments" << std::endl;
    else
    {
        std::ifstream ifs;
        std::string replaceFile = std::string(av[1]) + ".replace";
        std::ofstream ofs;
        std::string var;
        std::string repvar;
        ifs.open(av[1]);
        if(!ifs.good())
        {
            std::cout << "Error: Unable to open file " << av[1] << std::endl;
            exit(EXIT_FAILURE);
        }
        ofs.open(replaceFile);
        if (!ofs.good()) {
            std::cout << "Error: Unable to create file " << replaceFile << std::endl;
            exit(EXIT_FAILURE);
        }
        while(getline(ifs, var))
        {
            size_t i = var.find(av[2]); // The function returns the index of the first occurrence of sub-string, if the sub-string is not found it returns string::npos(string::pos is static member with value as the highest possible for the size_t data structurewhish is  -1).
            while(i != std::string::npos)
            {
                repvar = var.substr(0, i) + std::string(av[3]) + var.substr(i + std::string(av[2]).size());
                var = repvar;
                i = var.find(std::string(av[2]), i + std::string(av[3]).size());
                
            }
            ofs << var << std::endl;
        }
        ifs.close();
        ofs.close();
        std::cout << "File " << av[1] << " was successfully copied to " << replaceFile << " with string " << av[2] << " replaced by " << av[3] << std::endl;

    }
}