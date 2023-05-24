/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector2.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:33:47 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/18 18:15:20 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string.h>
#include<stdexcept>
#include<exception>
#include<vector>

bool conditionif(int i)
{
        return i > 3;
}

int main()
{
    //un iterateur est une classe dans un vecteur
    std::vector<int> v = {10,20,30,40};
    std::vector<int>::iterator it = v.begin(); // creation d un iterateur et l iterateur joue le meme role d un pointeur et on l initialise de telle sort qu'il pointe sur le premier element dans le vecteur
    std::cout << *it <<std::endl; //comme un pointeur on doit passer * pour avoir la valeur de cette iterateur et non pas son adresse (affiche 10) 
    it++;
    std::cout << *it <<std::endl;// affiche 20 
    std::cout << *(v.begin()) <<std::endl;// affiche 10 la meme chose on met un * pour avoir la valeur car begin renvoie un iterateur
    std::vector<int>::iterator it1 = v.end(); // creation d un iterateur et l iterateur joue le meme role d un pointeur et on l initialise de telle sort qu'il pointe sur l element qui suit le dernier element dans le vecteur
    std::cout << *it <<std::endl; //comme un pointeur on doit passer * pour avoir la valeur de cette iterateur et non pas son adresse , dans ce cas il va afficher une erreur car cette valeur et out of range du vecteur
    //comme correction de l iterateur end on doit faire std::vector<int>::iterator it1 = v.end() -1 pour qu'il pointe sur le dernier element ;
    //pour afficher les element dans un vecteur :
    for(it; it!=it1;it++)
        std::cout << *it <<std::endl;
    //ya aussi cbegin et cend pour avoir des valeurs constante on travaillant avec un iterateur constante
    std::vector<int>::reverse_iterator it3 = v.rbegin(); //l inverse du begin , cad le begin sera 40 et end - 1 sera 10
    std::vector<int>::reverse_iterator it4 = v.rend();   
    for(it; it3!=it4;it3++)
        std::cout << *it3 <<std::endl; // ca vas afficher 40 30 20 10
    // y a aussi crend et crbegin pour les constantes
    std::vector<int>::const_reverse_iterator it5 = v.rbegin(); //l
    std::vector<int>::const_reverse_iterator it6 = v.rend();   
    for(it; it5!=it6;it5++)
        std::cout << *it5 <<std::endl; // ca vas afficher 40 30 20 10
    v.insert(v.begin(), 55);// il va ajouter dans v 55 dans la premiere case du vecteur
    v.insert(v.end(), 5);// il va ajouter dans v 5 dans la derniere case du vecteur
    v.insert(v.begin() + 1, 45);// il va ajouter dans v 45 dans la 2eme case du vecteur
    v.insert(v.end() -1 , 51);// il va ajouter dans v 51 dans  l avant derniere case du vecteur
    //emplace joue le meme role que insert mais elle est plus rapide dans le delai du fonctionement par rapport a insert
    //y a aussi emplace.back()
    v.erase(v.begin()); // il va supprimer le premier element
    v.erase(v.begin() + 1); // il va supprimer le 2eme  element
    v.erase(v.begin() + 1, v.end()); // il va supprimer du 2eme element jusqu'a la fin 
    std::vector<int> v(10);
    v.resize(5);//il va resizer le vecteur de 10 a 5 lorque on change la taille on l'a diminue par exemple la taille se change mais le probleme c'est que les element restent dqns le vecteur donc on doit les supprimer
    v.shrink_to_fit();// il va supprimer tout les element qui suit la 5eme case;
    sort(v.begin(), v.end()); // a pour role mettre les element du vexteur en ordre croissant
    sort(v.rbegin(), v.rend()); // a pour role mettre les element du vexteur en ordre decroissant
    reverse(v.begin(), v.end()); // reverse le vecteur 
    min_element(v.begin(), v.end()); // donne lemin element dans un rang quand precis selon les parametres dans le vecteur
    max_element(v.begin(), v.end()); // meme chose que min_element mais dans ce cas elle donne le max
    minmax_element(v.begin(), v.end()); //donne les deux en meme temps
    std::vector<int>v = {5,1,2,7,0,3};
    
    auto it = find_if(v.begin(), v.end(), conditionif);
    for(; it!=v.end();it++)
        std::cout<< *it << std::endl;
    //dans ce cas il va afficher tous es element sans exeption pourquoi parceque find_if necessite que les nombres soient en ordre donc avant l utilsation de find_if je dois faire l'appel a la forction sort
    