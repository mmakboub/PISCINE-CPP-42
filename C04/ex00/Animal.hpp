/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:06:39 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/17 20:18:00 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include<string.h>

class Animal{
    protected :
        std::string _type;   
    public:
        Animal();
        Animal(const Animal &src);
        Animal &operator=(const Animal &rhs);
        std::string getType(void)const;
        virtual void makeSound() const;
        virtual ~Animal();
};
#endif