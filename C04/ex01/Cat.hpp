/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:21:38 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/16 16:58:14 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"
#include <iostream>
#include<string.h>
#include "Brain.hpp"

class Cat : public Animal{
    private :
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &src);
        Cat &operator=(const Cat &rhs);
        std::string getType(void)const;
        void makeSound() const;
        ~Cat();
};
#endif