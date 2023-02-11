/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:29:03 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/10 22:58:00 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie  *newZombie( std::string name )
{
    Zombie *zom1 = new Zombie(name);
    return(zom1);
    
}

/*Cette fonction crée un nouvel objet Zombie avec le nom donné en utilisant l'opérateur new et retourne un pointeur vers cet objet. 
L'appelant peut alors utiliser l'objet en dehors de la portée de la fonction en utilisant le pointeur retourné. 
Il est important de noter que l'appelant est responsable de la libération de la mémoire allouée pour l'objet en utilisant l'opérateur delete lorsqu'il n'est plus nécessaire.*/