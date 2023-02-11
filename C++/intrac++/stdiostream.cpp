/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdiostream.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:18:28 by mmakboub          #+#    #+#             */
/*   Updated: 2023/01/31 20:34:34 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
int main() {
   char buff[512];
   std::cout << "Hello world" << std::endl; // this symbol << it redirect hello world to be readed and puted on the output file
   std::cout << "input a world" << std::endl; 
   std::cin >> buff; // this symbol >> it redirect u to write at the input 
   std::cout << "you entred: [" << buff << "]" << std::endl;// endl it means come back to a new line
   return 0;
}