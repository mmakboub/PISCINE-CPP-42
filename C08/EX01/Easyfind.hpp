/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:42:16 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/11 23:59:43 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include<iostream>
#include<string.h>
#include<stdexcept>
#include<exception>
#include<vector>

template<typename T>
int easyfind(T &container, int value)
{
    typename T::iterator begin = container.begin();
    typename T::iterator end = container.end();
    for( ; begin != end; ++begin)
    {
        if(*begin == value)
            return(*begin);
    }
    throw  std::runtime_error("Value not found in container");
}
#endif
