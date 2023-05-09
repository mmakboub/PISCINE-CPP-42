/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:28:28 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/06 18:40:40 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void print(const T& value) {
    std::cout << "value is : " << value << std::endl;
}

int main() {
    int arr[] = {9, 2, 3, 4, 5};
    iterate(arr, 5, print<int>);
    return 0;
}