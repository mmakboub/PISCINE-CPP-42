/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 00:01:20 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/13 00:01:19 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Span.hpp"
// int main()
// {
//     try{
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << "shortestSpan :" << sp.shortestSpan() << std::endl;
// std::cout << "shortestSpan :" << sp.longestSpan() << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
// }
int main() {
    Span span(10000);

    // Ajouter des nombres à la Span
    for (int i = 0; i < 10000; ++i) {
        span.addNumber(i);
    }

    // Calculer et afficher les résultats
    try {
        int shortest = span.shortestSpan();
        int longest = span.longestSpan();
        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}