/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 00:39:54 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/13 21:57:20 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"
#include<algorithm>
Span::Span(unsigned int n)
{
    this->N = n;
    std::cout<< "default constracter is called for span" << std::endl;
}

void Span::addNumber(int num)
{
    if(v.size() < this->N)
        v.push_back(num);
    else
        throw std::runtime_error("EXCEPTION : CAN'T ADD NUM");      
}
int Span::getN(void)const{
    return this->N;
}
Span::Span(const Span &src) {
    std::cout << "Copy constructor called for Span" << std::endl;
    *this = src;
}
std::vector<int> Span::getV(void)const{
    return this->v;
}
Span &Span::operator=( const Span &rhs ){
     std::cout << " assignment operator called for Span" << std::endl;
       if (this != &rhs)
       {
            this->v = rhs.getV();
            this->N = rhs.getN();
       }
    return *this;
}

int Span::shortestSpan()
{
    if(v.size() <= 1)
        throw std::runtime_error("there is no distance");
    std::vector<int> sortednum(v);
    std::sort(sortednum.begin(), sortednum.end());
    int tmp = std::numeric_limits<int>::max();
    std::vector<int>::size_type i = 1;
    for(; i < sortednum.size(); i++)
    {
        if(sortednum[i] - sortednum[i - 1] < tmp)
            tmp = sortednum[i] - sortednum[i - 1];
    }
    return (tmp);
}
int Span::longestSpan()
{
    if(v.size() <= 1)
        throw std::runtime_error("there is no distance");
    int max = *std::max_element(v.begin(), v.end()); // renvoient des itérateurs, pas des valeurs entières directement => déréférencer ces itérateurs (*) pour obtenir les valeurs réelles.
    int min  = *std::min_element(v.begin(), v.end());
    return (max - min);
}

Span::~Span()
{
    std::cout<< "destracter is called for span "<< std::endl;
}

