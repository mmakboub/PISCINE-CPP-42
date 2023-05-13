/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:22:21 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/09 17:45:39 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"
class Awesome
{
    private:
         int _n;
    public:
        Awesome(void):_n(0){}
        Awesome(int n): _n(n){}
        Awesome & operator=(Awesome & a) { _n = a._n;
            return *this;
        }
        bool operator==(Awesome const & rhs) const{
            return (this->_n == rhs._n);
        }
        bool operator!=(Awesome const & rhs) const{
            return (this->_n == rhs._n);
        }
        bool operator>(Awesome const & rhs) const{
            return (this->_n > rhs._n);
        }
        bool operator<(Awesome const & rhs) const{
            return (this->_n < rhs._n);
        }
        bool operator>=(Awesome const & rhs) const{
            return (this->_n >= rhs._n);
        }
        bool operator<=(Awesome const & rhs) const{
            return (this->_n <= rhs._n);
        }
        int get_n() const {return _n;}
};

std::ostream & operator << (std::ostream & o, const Awesome &a) {
    o << a.get_n();
    return o;
}
int main()
{
    Awesome a(2);
    Awesome b(4);
    ::swap(a, b);
    std::cout << " after swaping : a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
}

// int main( void ) {
// int a = 2;
// int b = 3;
// ::swap( a, b );
// std::cout << "a = " << a << ", b = " << b << std::endl;
// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// std::string c = "chaine1";
// std::string d = "chaine2";
// ::swap(c, d);
// std::cout << "c = " << c << ", d = " << d << std::endl;
// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// return 0;
// }