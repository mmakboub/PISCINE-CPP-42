/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:28:28 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/09 17:44:40 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template<typename T>
void print(T& value) {
    std::cout << "value is : " << value << std::endl;
}

int main() {
    int arr[] = {9, 2, 3, 4, 5};
    iter(arr, 5, print);
    return 0;
}

// class Awesome{

//     private:
//         int _n;

//     public:
//         Awesome(void) : _n(42){ return;}
//         int get(void) const { return this->_n;}
// };

// std::ostream & operator<<(std::ostream & o ,Awesome const & rhs) { o << rhs.get(); return o;}

// template<typename T>
// void print(T const & x)
// {
//     std::cout << x << std::endl; return; 
// }
// int main()
// {
//     int tab[] = { 0,1,2,3,4};
//     Awesome tab2[5];
    
//     iter(tab,5,print);
//     iter(tab2, 5, print);

//     return 0;
// }