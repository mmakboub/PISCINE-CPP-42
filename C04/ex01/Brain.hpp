/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:23:12 by mmakboub          #+#    #+#             */
/*   Updated: 2023/03/16 16:54:40 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>
#include<string.h>

class Brain {
    private :
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &src);
        std::string getIdeas(void)const;
        Brain &operator=(const Brain &rhs);
        ~Brain();
};
#endif