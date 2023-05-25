/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 20:57:55 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/25 19:20:38 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <map>
#include <limits.h>
int	IsDigit(int c)
{
	return (c >= '0' && c <= '9');
}
int IsLeapYear(int annee) {
    if (annee % 4 == 0 && annee % 100 == 0 && annee % 400 == 0) 
            return 1;
    return 0;
}

int	IsAllDigits(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!IsDigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}
std::string RemoveSpaces(const std::string& input)
{
    std::string line = input;
    std::size_t firstNonSpace = line.find_first_not_of(' ');

    if (firstNonSpace != std::string::npos)
    {
        line.erase(0, firstNonSpace);
    }
    else
    {
        line.clear();
    }

    return line;
}
int CountTire(std::string line)
{
    int counter = 0;
    for (size_t i(0); i < line.length(); i++)
    {
        if(line[i] == '-')
           counter++;
    }
    return counter;
}
int CountPipe(std::string line)
{
    int counter = 0;
    for (size_t i(0); i < line.length(); i++)
    {
        if(line[i] == '|')
           counter++;
    }
    return counter;
}

int  DateChecker(std::string input)
{
    std::string line;
    line = RemoveSpaces(input);
    std::string year, month, day;
    year = line.substr(0,4);
    month = line.substr(5,2);
    day = line.substr(8,2);
    if(!IsAllDigits(year.c_str()) || !IsAllDigits(month.c_str()) || !IsAllDigits(day.c_str()))
        return(0);
    int d_year = atoi(year.c_str());
    int d_month = atoi(month.c_str());
    int d_day = atoi(day.c_str());
    if(d_year < 2009 || d_year > 2023)
        return(0);
    if(d_month < 1 || d_month > 12)
        return(0);
    if(d_month == 2 && ((d_day == 29 && !IsLeapYear(d_year)) || d_day >29))
        return(0);
    if(d_day < 0 || d_day > 31)
        return 0;
    else if(d_day > 0 && d_day <= 31)
    {
        if(d_day == 31 && (d_month != 1 && d_month != 3 && d_month != 5 && d_month != 7 && d_month != 8 && d_month != 10 && d_month != 12 && d_month != 31))
            return 0;
    }
    if(CountTire(line) != 2 || line.substr(4,1) != "-" || line.substr(7,1) != "-")
        return -1;
    return 1;
}
int is_int(const char *str)
{
    int			i;
	i = 0;
    std::istringstream iss(str);
    long num =0;
    if(num >= INT_MAX || num <= INT_MIN)
        return -1;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return 0;
		i++;
	}
    return 1;
}


int is_double(const char *type)
{
    int i = 0;
    int pointCount=0;
    long num  =0;
    if(num >= INT_MAX || num <= INT_MIN)
        return -1;
    while (i < (int)strlen(type))
    {
        if (type[i] == '.')
            pointCount++;
        if (!IsDigit(type[i]) && type[i] != '.')
            return 0;
        i++;
    }
    if (pointCount != 1)
        return 0;
    return 1; 
}
int ValueChecker(std::string line)
{
    if(CountPipe(line) != 1 || line.substr(11,1) != "|")
        return 0;
    if(line[11] == '|' && line[12] == ' ')
    {
        std::string num = line.substr(13);
        if(!is_double(num.c_str()) && !is_int(num.c_str()))
            return 0;
        if(is_int(num.c_str()) == -1 || is_double(num.c_str()) == -1)
            return -1;
        double dvalue = std::atof(num.c_str());
        if((int)dvalue > 1000 )
            return -1;
    }
    return 1;

}
int parser(std::string line)
{
    if(line == "date | value")
        return -1;
    if(line.length() < 13 || !DateChecker(line))
    {
        std::cout << "Error: bad input => "<< line.substr(0,4) <<"-"<< line.substr(5,2) <<"-"<<line.substr(8,2)<<std::endl;
        return 0;
    }
    else if( DateChecker(line) == -1)
    {
        std::cout << "Error: not a positive number."<<std::endl;
        return 0;
    }
    else if(ValueChecker(line) == -1)
    {
        std::cout << "Error: too large a number."<<std::endl;
        return 0;
    }
    else if(!ValueChecker(line))
    {
        std::cout << "Error: bad input => "<< line.substr(0,4) <<"-"<< line.substr(5,2) <<"-"<<line.substr(8,2)<<std::endl;
        return 0;
    }
    return 1;
}
int main(int ac, char **av){
    if(ac != 2)
        std::cout << "error: incorrect number of arguments" << std::endl;
    else
    {
        std::string inputefile = (av[1]);
        std::ifstream ifs(inputefile);
        std::string datafile = "data.csv";
        std::ifstream dfs(datafile);
        
        if(!ifs.good())
        {
            std::cout << "Error: Unable to open file " << av[1] << std::endl;
            exit(EXIT_FAILURE);
        }
        if(!dfs.good())
        {
            std::cout << "Error: Unable to open file " << datafile << std::endl;
            exit(EXIT_FAILURE);
        }
    std::map<std::string, std::string> Bitcoin_map;
    std::string input;
    while(std::getline(dfs,input))
    {
        std::string date, value;
        date = input.substr(0,10);
        value = input.substr(11);
        Bitcoin_map[date] = value;
    }
    dfs.close();
    std::string input2;
    while(std::getline(ifs, input2))
    {
        int res = parser(input2);
        if(res == -1)
            continue ;
        else if(res == 1)
        {
            std::string var = input2.substr(0,10);
            std::string Bitcoin_value;
            std::map<std::string, std::string>::iterator it = Bitcoin_map.find(var);
            std::map<std::string, std::string>::iterator it2 = Bitcoin_map.lower_bound(var);
            if(it != Bitcoin_map.end())
                Bitcoin_value = it->second;
            else if(it2 == Bitcoin_map.begin())
            {
                std::cout<< "date is out of range" <<std::endl;
                return 0;
            }
            else if(it == Bitcoin_map.end())
                Bitcoin_value = (--it2)->second;
            
            float fbitc_value , fvalue;
            fbitc_value = atof(Bitcoin_value.c_str());
            fvalue = atof(input2.substr(13).c_str());
            std::cout << var << " => " << fvalue << " = " << fvalue * fbitc_value << std::endl;
            
        }
    }
    
}
}



// : check for a number > than the rang and check for a number that is between to numbers and doesn't exist is .csv file