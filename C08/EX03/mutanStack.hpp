/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 00:36:46 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/13 22:25:31 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP
#include<iostream>
#include<string.h>
#include<vector>
#include<stack>
#include<deque>
template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
     public:
     typedef typename Container::iterator iterator;
     MutantStack(){};
     MutantStack(const MutantStack &src) {(void)src;};
     MutantStack &operator=( const MutantStack &rhs )
     {
       if (this != &rhs)
            this->c = rhs.c;
       return *this;
     };
     iterator begin(){return this->c.begin();};
     iterator end(){return this->c.end();};
     virtual ~MutantStack(){};
};

#endif