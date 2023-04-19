/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 00:51:18 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/19 02:24:59 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <limits.h> 
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
	return (ft_is_ascii(a) && !ft_is_digit(a));
}

int is_int(char *str)
{
    int			i;

	i = 0;
	if (str[0] != '-' && str[0] != '+' && !ft_is_digit(str[0]))
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
    if(!strcmp(type, "-inff") || !strcmp(type, "+inff") || !strcmp(type, "nanf"))
        return(0);
    return(1);
}
int dpseudotype(char *type)
{
    if(!strcmp(type, "-inf") || !strcmp(type, "+inf") || !strcmp(type, "nan"))
        return(0);
    return(1);
}
int is_float(char *type)
{
    if(fpseudotype(type))
        return(0);
    if(type[strlen(type) -1] != 'f' && type[strlen(type) -1] != 'F')
        return 0;
    int i = 0;
    while (type[i] == '+' || type[i] == '-')
	{
		i++;
		if (type[i] == '+' || type[i] == '-')
			return (0);
	}
    int j = 0;
    int flag = 0;
    while(type[j])
    {
        if( type[j] != 'f' && type[j] != 'F' && type[j] != '.' && type[i] == '+' && type[i] == '-' && !ft_is_digit(type[j]) )
            return(0);
        if(type[j] == '.')
            flag++;
        j++;   
    }
    if(flag != 1)
        return(0);
    return(1);
}
//str.find('.') != std::string::npos

int is_double(char *type)
{
    int flag = 0;
    if(dpseudotype(type))
        return(0);
    int i = 0;
    if(type[0] == '+' || type[i] == '-')
	{
		i++;
		if (type[i] == '+' || type[i] == '-')
			return (0);
	}
    int j = 0;
    while(type[j])
    {
        if(!ft_is_digit(type[j]) && type[j] != '.' && type[i] == '+' && type[i] == '-')
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
        return (4);
    else 
        return(0);
    
}

void cast_to_int(std::string arg)
{  
    double d = std::atof(arg.c_str());
    int ivalue = (int)d;
    if(ivalue >= INT_MAX || ivalue <= INT_MIN)
    {
        std::cout << "int : impossible" << '\n';
        return ;
    }
    
    if (arg.size() == 1 && std::isalpha(arg[0]))
    {
        std::cout << "int: "  <<  (int)arg[0] << std::endl;
        return ;
    }
    
    
    std::cout << "int: "  <<  std::to_string(ivalue) << std::endl;
        
    // return(ivalue);
}

void cast_to_char(std::string arg)
{
    
    if (arg.size() != 1)
    {
        std::cout << "char: impossible" << '\n';
        return ;
    }
   
    if((int)arg[0] < 32 || (int)arg[0] > 126)
         std::cout <<  "char: Non displayeble" << std::endl;
    else
         std::cout <<  "char: " << arg << std::endl;
    
}

void cast_to_float(std::string arg)
{
    if(arg.back() != 'f' && arg.back() != 'F')
     {
        float fvalue = std::strtof(arg.c_str(), nullptr);
        if (arg.size() == 1)
            std::cout << "float: " << fvalue << ".0f"<< std::endl;
        else
        std::cout << "float: " << fvalue <<"f"<< std::endl;
     }
    else 
    std::cout << "float: " << arg <<std::endl;

   
    }

void cast_to_double(std::string arg)
{

    double dvalue = std::strtod(arg.c_str(), nullptr);
    if (arg.size() == 1)
            std::cout << "double: " << dvalue << ".0"<< std::endl;
    else
        std::cout << "double: "<< dvalue << std::endl;
}


void trait_case(char *arg)
{
    cast_to_char(arg);
    cast_to_int(arg);
    cast_to_float(arg);
    cast_to_double(arg);
}


int main(int ac , char **av)
{
    
    if(ac == 2)
    {
        int ret = receivetype(av[1]);
        // std::cout << ret << std::endl;
        switch(ret){
        case 0:
            std::cout << "invalide type" << std::endl;
        case 1:
            trait_case(av[1]);
            break;
        case 2:
            trait_case(av[1]);
            break;
        case 3:
            trait_case(av[1]);
            break;
        case 4:
            trait_case(av[1]);
        }
        
    }
    else
        std::cout << "number of argments is invalide" << std::endl;
}