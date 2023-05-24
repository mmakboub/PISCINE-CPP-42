/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:20:07 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/19 18:46:05 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATERVER_HPP
#define WHATERVER_HPP
#include<iostream>
#include<string.h>
template<typename int>
whatever max(whatever a, whatever b) {
    return (a > b) ? a : b;
}
template<typename whatever>
whatever min(whatever a, whatever b) {
    return (a < b) ? a : b;
}
template<typename whatever>
void swap(whatever &a, whatever &b) {
   whatever tmp;
    tmp = b;
    b = a;
    a = tmp;
}
#endif