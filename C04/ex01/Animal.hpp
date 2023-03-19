/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:06:39 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/17 19:36:10 by mmakboub         ###   ########.fr       */
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
/*On utilise un destructeur virtuel lorsqu'on travaille avec une hiérarchie de classes, c'est-à-dire une classe de base et des classes dérivées qui héritent de la classe de base.
Si une classe de base a au moins une fonction virtuelle, il est recommandé de déclarer son destructeur comme virtuel également. 
Cela permet de s'assurer que lorsque l'on supprime un objet via un pointeur vers la classe de base, 
le destructeur de la classe dérivée est appelé avant celui de la classe de base
Si le destructeur de la classe de base n'est pas virtuel, et que l'on supprime un objet via un pointeur vers la classe de base, seul le destructeur de la classe de base sera appelé. Cela peut causer des fuites de mémoire ou des comportements indéterminés si la classe dérivée alloue des ressources dans son constructeur, par exemple.
En déclarant le destructeur de la classe de base comme virtuel, on permet à la classe dérivée de définir son propre destructeur qui sera appelé lorsque l'on supprime un objet de la classe dérivée via un pointeur vers la classe de base. Cela garantit que toutes les ressources allouées par la classe dérivée seront correctement libérées, même si on manipule la classe via un pointeur vers la classe de base.*/
#endif