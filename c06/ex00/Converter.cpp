/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 00:51:18 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/20 02:58:07 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <limits.h> 

int ft_strlen(char *str)
{
    int i =0;
    while(str[i])
        i++;
    return i;
}

int	ft_is_ascii(int c)
{
	return (c >= 0 && c <= 127);
}

int	ft_is_digit(int c)
{
	return (c >= '0' && c <= '9');
}

int	is_char(char *c)
{
    char a = c[0];
    if(ft_strlen(c) == 1 && ft_is_ascii(a) && !ft_is_digit(a))
	    return (0);
    return 1;
}

int is_int(char *str)
{
    int			i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
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
    if(!strcmp(type, "-inff") || !strcmp(type, "+inff") || !strcmp(type, "nanf")  || !strcmp(type, "inff"))
        return(0);
    return(1);
}
int dpseudotype(char *type)
{
    if(!strcmp(type, "-inf") || !strcmp(type, "+inf") || !strcmp(type, "nan") || !strcmp(type, "inf"))
        return(0);
    return(1);
}
int is_float(char *type)
{
    int i =0;
    int pointCount=0;
    if(!fpseudotype(type))
        return(1);
    if (type[i] == '-' || type[i] == '+')
        i++;
    while (i < ft_strlen(type) - 1)
    {
        if (type[i] == '.')
            pointCount++;
        if (!ft_is_digit(type[i]) && type[i] != '.')
            return 0;
        i++;
    }
    if (pointCount != 1)
        return 0;
    if(type[ft_strlen(type) -1] == 'f' || type[ft_strlen(type) -1] == 'F')
        return 1;
    return 0; 
}
//str.find('.') != std::string::npos

int is_double(char *type)
{
    if(!dpseudotype(type))
        return(1);
    int i = 0;
    int pointCount=0;
    if (type[i] == '-' || type[i] == '+')
        i++;
    while (i < ft_strlen(type))
    {
        if (type[i] == '.')
            pointCount++;
        if (!ft_is_digit(type[i]) && type[i] != '.')
            return 0;
        i++;
    }
    if (pointCount != 1)
        return 0;
    return 1; 
}

int receivetype(char *type)
{
    if(is_float(type))
        return(1);
    else if(!is_char(type))
        return(2);
    else if(is_int(type))
        return(3);
    else if(is_double(type))
        return (4);
    else 
        return(0);
    
}
int specialpseudo(char *type)
{
     if(!strcmp(type, "-inff") || !strcmp(type, "+inff")  || !strcmp(type, "inff") || !strcmp(type, "-inf") || !strcmp(type, "+inf") || !strcmp(type, "inf"))
        return(0);
    return(1);
}
void cast_to_int(std::string arg, int ret)
{  
    double x;
    if (ret == 2)
        x = (int)arg[0];
    else
        x = std::atof(arg.c_str());
    if ( specialpseudo((char *)arg.c_str()))
    {
        if((long)x > INT_MAX || (long)x < INT_MIN)
        {
            std::cout << "int : impossible" << '\n';
            return ;
        }
    }
    std::cout << "int: "  <<  (int)x << std::endl;
}

void cast_to_char(std::string arg, int ret)
{
    int x;
    if (ret == 2)
        x = (int)arg[0];
    else
        x = std::atoi(arg.c_str());
    if ((x < 0 || x > 127) || !dpseudotype((char *)arg.c_str()) || !fpseudotype((char *)arg.c_str()))
    {
        std::cout << "char: impossible" << '\n';
        return ;
    }
    if(x < 32 || x > 126)
         std::cout <<  "char: Non displayeble" << std::endl;
    else
         std::cout <<  "char: '" << (char)x << "'"<< std::endl;
}

void cast_to_float(std::string arg, int ret)
{
    float fvalue;
    if (ret == 2)
        fvalue = (int)arg[0];
    else
        fvalue = (float)std::atof(arg.c_str());
    if ((int)fvalue == fvalue)
        std::cout << "float: " << fvalue << ".0f"<< std::endl;
    else
        std::cout << "float: " << fvalue <<"f"<< std::endl;
    }

void cast_to_double(std::string arg, int ret)
{
    double dvalue;
    if (ret == 2)
        dvalue = (int)arg[0];
    else
        dvalue = std::atof(arg.c_str());
    if ((int)dvalue == dvalue)
            std::cout << "double: " << dvalue << ".0"<< std::endl;
    else
        std::cout << "double: "<< dvalue << std::endl;
}

void trait_case(char *arg,int ret)
{
    cast_to_char(arg,ret);
    cast_to_int(arg,ret);
    cast_to_float(arg,ret);
    cast_to_double(arg,ret);
}


int main(int ac , char **av)
{
    
    if(ac == 2)
    {
        int ret = receivetype(av[1]);
        if(ret == 0)
            std::cout << "invalide type" << std::endl;
        else
            trait_case(av[1],ret);
    }
    else
        std::cout << "number of argments is invalide" << std::endl;
}