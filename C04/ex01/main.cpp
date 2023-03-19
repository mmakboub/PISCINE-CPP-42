/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:32:35 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/17 19:32:06 by mmakboub         ###   ########.fr       */
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
            animals[i]->makeSound();
        } else {
            animals[i] = new Cat();
        animals[i]->makeSound();
        }
    }
    for (int i = 0; i < NumAnimals; ++i) {
        delete animals[i];
    }

    return 0;
}