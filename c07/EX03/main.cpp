/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:43:16 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/09 18:26:41 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
int main()
{
    // Creating an empty Array
    Array<int> arr1;
    std::cout << "arr1 size: " << arr1.size1() << std::endl;

    // Creating an Array with 5 elements
    Array<int> arr2(5);
    std::cout << "arr2 size: " << arr2.size1() << std::endl;

    // Copy arr2 into arr3 
    Array<int> arr3 = arr2;
    //modify the first 3 case of arr3
    arr3[0] = 10;
    arr3[1] = 20;
    arr3[2] = 30;

    // Print the elements of arr2 and arr3
    std::cout << "arr2 elements: ";
    for (unsigned int i = 0; i < arr2.size1(); i++)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;

    std::cout << "arr3 elements: ";
    for (unsigned int i = 0; i < arr3.size1(); i++)
        std::cout << arr3[i] << " ";
    std::cout << std::endl;

    // Trying to access an element with an invalid index
    try {
        int x = arr2[10];
        std::cout << "la valeur de x est : " << x << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
      try {
        int x = arr2[2];
        std::cout << "la valeur de x est : " << x << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}