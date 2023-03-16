/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:32:35 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/16 15:33:27 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main() {
    const int NumAnimals = 6;
    Animal* animals[NumAnimals];
    for (int i = 0; i < NumAnimals; ++i) {
        if (i % 2 == 0) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }

    for (int i = 0; i < NumAnimals; ++i) {
        delete animals[i];
    }

    return 0;
}