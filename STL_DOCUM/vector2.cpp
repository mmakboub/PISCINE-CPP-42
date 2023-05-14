/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector2.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:33:47 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/14 19:23:31 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string.h>
#include<stdexcept>
#include<exception>
#include<vector>

int main()
{
    //un iterateur est une classe dans un vecteur
    std::vector<int> v = {10,20,30,40};
    std::vector<int>::iterator it = v.begin(); // creation d un iterateur et l iterateur joue le meme role d un pointeur et on l initialise de telle sort qu'il pointe sur le premier element dans le vecteur
    std::cout << *it <<std::endl; //comme un pointeur on doit passer * pour avoir la valeur de cette iterateur et non pas son adresse (affiche 10) 
    it++;
    std::cout << *it <<std::endl;// affiche 20 
    std::cout << *(v.begin()) <<std::endl;// affiche 10 la meme chose on met un * pour avoir la valeur car begin renvoie un iterateur
}