/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:41:01 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/16 13:43:19 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_H
#define WRONGCAT_H
#include "WrongAnimal.hpp"
#include <iostream>
#include<string.h>

class WrongCat : public WrongAnimal{
    public:
        WrongCat();
        WrongCat(const WrongCat &src);
        WrongCat &operator=(const WrongCat &rhs);
        std::string getType(void)const;
        void makeSound() const;
        ~WrongCat();
};
#endif