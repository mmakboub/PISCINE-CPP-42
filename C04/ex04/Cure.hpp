/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:28:05 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/19 18:06:43 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure( Cure const &src);
        Cure& operator=( Cure const & rhs);
        AMateria *clone() const;
        void use(ICharacter &target);
        ~Cure();
};

#endif