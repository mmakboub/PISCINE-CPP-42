/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:28:08 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/16 16:55:48 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( ){
    std::cout << "Default constructor called for Brain " << std::endl;
}
Brain::Brain(const Brain &src) {
    std::cout << "Copy constructor called for Brain" << std::endl;
    int i = 0;
    while (i < 100)
     {
        this->ideas[i] = src.ideas[i];
        i++;
    }
    
}
std::string Brain::getIdeas() const {
    std::string result;
    for (int i = 0; i < 100; i++) {
        result += ideas[i];
    }
    return result;
}

Brain &Brain::operator=( const Brain &rhs ){
     std::cout << " assignment operator called for Brain" << std::endl;
       if (this != &rhs)
       {
            int i = 0;
            while (i < 100)
            {
                this->ideas[i] = rhs.ideas[i];
                i++;
            }
       }
    return *this;
}

Brain::~Brain()
{
    std::cout << "destracter is called for Brain"<< std::endl;
}