/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:30:39 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/12 21:10:30 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include <iostream>
#include<string.h>
#include "Animal.hpp"
class Dog : public Animal{
    public:
        Dog();
        Dog(const Dog &src);
        Dog &operator=(const Dog &rhs);
        std::string getType(void)const;
        void makeSound() const;
        ~Dog();
};
#endif