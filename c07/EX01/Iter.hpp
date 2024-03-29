/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:28:31 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/09 17:27:09 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include<iostream>
#include<string.h>
template<typename T>
void iter(T *tab, int len, void fonc(T const &var)) 
{
    for(int i(0); i < len; i++)
        fonc(tab[i]);
};
#endif