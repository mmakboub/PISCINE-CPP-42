/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:04:36 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/13 18:50:08 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main() {
  Harl harl;
  harl.complain("D");
  harl.complain("WARNING");
  harl.complain("ERROR");
  harl.complain("INFO");

  return 0;
}