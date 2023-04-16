/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 00:51:18 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/16 02:53:57 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include <string>

int is_char(std::string arg)
{
    if(arg.length == 1 && is_ascii(arg) && !is_digit(arg))
        return 1;
    return 0;
}

int is_int(char *str)
{
    int			i;

	i = 0;
	if (str[0] != '-' && str[0] != '+' && !ft_isdigit(str[0]))
		return(0);
    if(str[i] == '-' || str[i] == '+')
        i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return 0;
		i++;
	}
    return 1;
}
int fpseudotype(char *type)
{
    if(!strcmp(type, "-inff") || !strcmp(type, "+inff"))
        return(0);
    return(1);
}
int is_float(char *type)
{
    int flag = 0;
    if(fpseudotype(type))
        return(0);
    if(type[strlen(type) -1] != 'f' || type[strlen(type) -1] != 'F')
        return 0;
    int i = 0;
    while (type[i] == '+' || type[i] == '-')
	{
		i++;
		if (type[i] == '+' || type[i] == '-')
			return (0);
	}
    int j = 0;
    while(type[j])
    {
        if(!is_digit(type[j]) && type[j] != 'f' && type[j] != 'F' type[j] != '.' && type[i] == '+' && type[i] == '-')
            return(0);
        if(type[j] == '.')
            flag++;
        j++;   
    }
    if(flag != 1)
        return(0);
    return(1);
}

int is_double(char *type)
{
    int flag = 0;
    if(fpseudotype(type))
        return(0);
    if(type[strlen(type) -1] != 'f' || type[strlen(type) -1] != 'F')
        return 0;
    int i = 0;
    while (type[i] == '+' || type[i] == '-')
	{
		i++;
		if (type[i] == '+' || type[i] == '-')
			return (0);
	}
    int j = 0
    while(type[j])
    {
        if(!is_digit(type[j]) && type[j] != 'f' && type[j] != 'F' type[j] != '.' && type[i] == '+' && type[i] == '-')
            return(0);
        if(type[j] == '.')
            flag++;
        j++;   
    }
    if(flag != 1)
        return(0);
    return(1);
}

int receivetype(char *type)
{
    if(is_float(type))
        return(1);
    else if(is_char(type))
        return(2);
    else if(is_int(type))
        return(3);
    else if(!is_double(type))
        return (4)
    else 
        return(0);
    
}

int main(int ac , char **av)
{
    
    if(ac == 2)
    {
        int ret = receivetype(av[1]);
        switch(receivetype(av[1])){
        case 0:
            std::cout << "invalide type" << std::endl;
        case 1:
        {
            
        }
        case 2:
        {
            
        }
        case 3:
        {
            
        }
        case 4:
        {
            
        }
        }
        
    }
    else
        std::cout << "number of argments is invalide" << std::endl;
}