/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:28:31 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/06 18:40:51 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include<iostream>
#include<string.h>
template<typename iter, typename fonction>
void iterate(iter *tab, iter len, fonction fonc) {
    for(int i(0); i < len; i++)
        fonc(tab[i]);
}
#endif