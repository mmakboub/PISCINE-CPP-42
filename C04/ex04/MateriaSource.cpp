/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 19:14:23 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/19 21:23:25 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    int i = 0;
    while(i < 4)
    {
        this->_materias[i] = NULL;
        i++;
    }
}

MateriaSource::~MateriaSource()
{
    int i = 0;
    while(i < 4)
    {
        if (this->_materias[i])
            delete this->_materias[i];
        i++;
    }
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    *this = src;
}

MateriaSource& MateriaSource::operator=( MateriaSource const & rhs )
{
    if (this != &rhs)
    {
        int i = 0;
    while(i < 4)
    {
        this->_materias[i] = rhs._materias[i];
        i++;
    }
    }
    return *this;
}

void    MateriaSource::learnMateria( AMateria* m )
{
    int i = 0;
    while(i < 4)
    {
        if (this->_materias[i] == NULL)
        {
            this->_materias[i] = m;
            return;
        }
        i++;
    }
}

AMateria*   MateriaSource::createMateria( std::string const& type ) {
    
    int i = 0;
    while(i < 4)
    {
        if (_materias[i] && type == this->_materias[i]->getType())
            return this->_materias[i]->clone();
        i++;
    }
    return(NULL);
}
