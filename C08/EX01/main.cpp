/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 00:00:12 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/12 00:00:19 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Easyfind.hpp"
#include <vector>

int main()
{

    std::vector<int> v;
    for (int i = 0; i <= 9; ++i) {
        v.push_back(i);
    }
    int val = 15;
    try{
    
        int iterat = easyfind(v, val);
        std::cout << "value is : " << iterat<< std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}