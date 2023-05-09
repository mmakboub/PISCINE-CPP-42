/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 22:52:42 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/20 03:19:08 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base{
    public:
        virtual ~Base() {}
};

class A: public Base{};
class B: public Base{};
class C: public Base{};

Base * generate(void){
    srand(time(NULL));
    int cases = rand() % 3;
    switch (cases) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
    }
    return(NULL);
}

void identify(Base* p){
    if (p == nullptr)
        return;
    if (dynamic_cast<A*>(p) != nullptr) {
        std::cout << "type : A" << std::endl;
    } else if (dynamic_cast<B*>(p) != nullptr) {
        std::cout << "type : B" << std::endl;
    } else if (dynamic_cast<C*>(p) != nullptr) {
        std::cout << "type : C" << std::endl;
}
}

void identify(Base& p){
    try
    {
        Base a = dynamic_cast<A&>(p);
        std::cout << "type : A" << std::endl;
    }
    catch (std::exception &e) 
    {
        try 
        {
            Base b = dynamic_cast<B&>(p);
            std::cout << "type : B" << std::endl;
        } 
        catch (std::exception &e) 
        {
            try 
            {
                Base c = dynamic_cast<C&>(p);
                  std::cout << "type : C" << std::endl;
            } 
            catch (std::exception &e) 
            {
                  std::cout << e.what() << std::endl;; 
            }  
        }  
    }  
}
int main() {
    Base* ptr = generate();
    identify(ptr);
    identify(*ptr);
    delete ptr;
    return 0;
}