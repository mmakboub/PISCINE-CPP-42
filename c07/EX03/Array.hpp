/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:43:20 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/09 18:14:03 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include<iostream>
#include<string.h>
#include<exception>
template <typename T>
class Array {
private:
   unsigned int size;
   T *ptr;//stocker les éléments d l'Array.
 
public:
   Array()
   {
      this->ptr = nullptr;
      this->size = 0;
      std::cout << "Default constracter is Called" << std::endl;
   };
   Array(unsigned int n )
   {
      std::cout << "Constracter with param of type int is Called" << std::endl;
      this->size = n;
      this->ptr = new T[n];
      unsigned int i = 0;
      while(i < n)
      {
         ptr[i] = T();
         i++;
      }
   };
   Array(const Array& other)
   { 
       std::cout << "Copy constracter is Called" << std::endl;
      unsigned int i = 0;
      this->size = other.size;
      this->ptr = new T[other.size];
      while(i < size)
      {
         ptr[i] = other.ptr[i];
         i++;
      }
   };
   Array& operator=(const Array& rhs)
   {
      if (this != &rhs) 
      {
         delete [] ptr;
         this->size = rhs.size;
          unsigned int i = 0;
         this->ptr = new T[this->size];
         while(i < this->size)
         {
            ptr[i] = rhs.ptr[i];
            i++;
         }
      }
      return *this;
   };
   ~Array()
   {
      delete [] ptr;
   };
   unsigned int size1() const
   {
      return this->size;
   };
  T& operator[](unsigned int index)
  {
   if(index >= this->size || index < 0)
      throw std::exception();
   return ptr[index];
  }
};

#endif


