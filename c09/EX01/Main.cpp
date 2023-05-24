/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 20:57:55 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/24 15:24:27 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <map>
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
        line.clear();  // La chaîne entière est constituée d'espaces, donc on la vide
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
        return 0;
    return 1;
}
int is_int(const char *str)
{
    int			i;

	i = 13;
	if (str[i] == '-' || str[i] == '+')
        return 0;
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
    int i = 13;
    int pointCount=0;
    if (type[i] == '-' || type[i] == '+')
        return 0;
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
        if(!is_double(line.c_str()) && !is_int(line.c_str()))
            return -1;
    }
    return 1;

}
int parser(std::string line)
{
    // if(line.length() < 13 || !DateChecker(line) || !ValueChecker(line))
    // {
    //     std::cout << "Error: bad input => "<< line.substr(0,4) <<"-"<< line.substr(5,2) <<"-"<<line.substr(8,2)<<std::endl;
        
    // }
    if(line.length() < 13)
        return 0;
    else if(!DateChecker(line))
        return -1;
    else if(ValueChecker(line) == -1)
        return 2;
    else if(!ValueChecker(line))
        return 3;
    else 
        return 1;
}
int main() {
    std::string line;
    std::cout << "Entrez une ligne : ";
    std::getline(std::cin, line);
    int res = parser(line);
    try{
        if(res == 0)
            std::cout << "Error: bad input => 0"<<std::endl;
        else if(res == -1)
            std::cout << "Error: bad input => -1"<<std::endl;
        else if(res == 2)
            std::cout << "Error: bad input => 2"<<std::endl;
        else if(res == 3)
            std::cout << "Error: bad input => 3"<<std::endl;
        else 
            std::cout << "correct input => 1"<<std::endl;
            
    }catch (const std::exception& e) {
        std::cout << "Erreur : " << e.what() << std::endl;
    }

    return 0;
}
// int main(int ac, char **av){
//     if(ac != 2)
//         std::cout << "error: incorrect number of arguments" << std::endl;
//     else
//     {
//         std::string inputefile = (av[1]);
//         std::ifstream ifs(inputefile);
//         std::string datafile = "data.csv";
//         std::ifstream dfs(datafile);
        
//         ifs.open(av[1]);
//         if(!ifs.good())
//         {
//             std::cout << "Error: Unable to open file " << av[1] << std::endl;
//             exit(EXIT_FAILURE);
//         }
//         dfs.open(av[1]);
//         {
//             std::cout << "Error: Unable to open file " << av[1] << std::endl;
//             exit(EXIT_FAILURE);
//         }
//     std::map<std::string, std::string> Bitcoin_map;
//     std::string input;
//     while(std::getline(dfs,input))
//     {
//         std::string date, value;
//         date = input.substr(0,10);
//         value = input.substr(11);
//         Bitcoin_map[date] = value;
//     }
//     dfs.close();
//     std::string input2;
//     while(std::getline(ifs, input2))
//     {
//         parser(input2);
//     }
    
// }
// }

