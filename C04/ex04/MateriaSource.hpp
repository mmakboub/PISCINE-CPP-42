/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:45:45 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/19 20:26:21 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria       *_materias[4];
    public:
        MateriaSource();
        MateriaSource( MateriaSource const & );
        MateriaSource&  operator=( MateriaSource const &rhs);
        AMateria*  createMateria( std::string const & type );
        void learnMateria( AMateria* m);
        ~MateriaSource();
};


#endif