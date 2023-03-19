/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:32:41 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/17 20:24:42 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* i = new Cat();
const Animal* j = new Dog();
std::cout << j->getType() << " : ";
j->makeSound() ; 
std::cout << i->getType() << " : ";
i->makeSound();
meta->makeSound();

delete meta;
delete i;
delete j;
std::cout << "------------------------" << std::endl;
const WrongAnimal* Wanimal = new WrongAnimal();
const WrongAnimal* Wcat = new WrongCat();
std::cout << Wcat->getType() << ": ";
Wcat->makeSound(); 
Wanimal->makeSound();

delete Wanimal;
delete Wcat;
return 0;
}