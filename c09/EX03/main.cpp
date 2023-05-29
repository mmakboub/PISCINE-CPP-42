/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:47:38 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/29 20:19:17 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include "deque"
#include <limits.h>
#include "PmergeMe.hpp"
#include <iostream>
#include <iomanip>
void	print_error()
{
	std::cout<< "error" <<std::endl;
	exit(0);
}
int	IsDigit(int c)
{
	return (c >= '0' && c <= '9');
}
void	Mychecker(std::deque<int> &deq,std::vector<int> &vect,char **str)
{
	int			i;
	int			y;
	long long	nbr;

	i = 1;
	y = 0;
	while (str[i])
	{
        // if(str[i] == " ")
        //     continue;
		if (str[i][1] == '\0' && !IsDigit(str[i][0]))
			print_error();
        if(str[i][0] == '-')
            print_error();
		nbr = atoi(str[i]);
		if (nbr > 2147483647 || nbr < -2147483648)
			print_error();
		y = 1;
		while (str[i][y])
		{
			if (str[i][y] < '0' || str[i][y] > '9')
				print_error();
			y++;
		}
		i++;
        vect.push_back(nbr);
        deq.push_back(nbr);
	}
   
} 
void printmsg(std::vector<int>&vect)
{
    size_t i(0);
    for (; i < vect.size(); ++i) {
        std::cout << vect[i] << " ";
    }
    std::cout << std::endl;
}
int main(int ac, char **av)
{
    clock_t start;
    PmergeMe var;
    if(ac < 3)
    {
        std::cout << " number of arguments is invalide";
        exit(0);
    }
    std::vector<int> vect;
    std::deque<int> deq;
    Mychecker(deq, vect, av);
    start = clock();
    var.mergsortQ(deq, ac);
    clock_t end = clock();
    double TimeUsedQ = ((double) (end - start)) / CLOCKS_PER_SEC;
    std::cout << "before : ";
    printmsg(vect);
    std::cout << std::endl;
    start = clock();
    var.mergsortV(vect, ac);
    std::cout << "after: ";
    printmsg(vect) ;
    std::cout<< std::endl;
    end = clock();
    double TimeUsedV = ((double) (end - start)) / CLOCKS_PER_SEC;
    std::cout<<"Time to process a range of " <<deq.size() << " elements with deque : " <<std::fixed << TimeUsedQ <<std::endl;
    std::cout<<"Time to process a range of " << vect.size() << " elements with vector : " <<std::fixed << TimeUsedV <<std::endl;
}
        
