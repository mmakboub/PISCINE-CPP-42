/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:00:21 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/17 21:20:37 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    int fixedValue = 123456;    // Exemple de valeur en virgule fixe
    int fractionalBits = 8;    // Exemple de nombre de bits de la partie fractionnaire

    float floatValue = (float)fixedValue / (1 << fractionalBits);  // Conversion en nombre à virgule flottante

    std::cout << "Valeur en virgule fixe : " << fixedValue << std::endl;
    std::cout << "Valeur à virgule flottante : " << floatValue << std::endl;

    return 0;
}