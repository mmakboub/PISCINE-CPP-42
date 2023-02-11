/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:52:25 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/01 16:55:36 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  INIT_H
#define INIT_H

class cinstanc{
    
public:
    char a1;
    int a2;
    float a3;
    
    cinstanc(char p1, int p2, float p3);
    ~cinstanc(void);
    
    void bar( void );
};

#endif