/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 00:01:47 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/12 23:11:25 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include<iostream>
#include<string.h>
#include<vector>

class Span{
  
  private:
    unsigned int N;
    std::vector<int> v;

  public:
  Span(unsigned int n);
  Span(const Span& other);
  void addNumber(int num);
  int shortestSpan();
  int longestSpan();
  std::vector<int> getV(void)const;
  int getN(void)const;
  Span& operator=(const Span& rhs);
  ~Span();
    
};

#endif