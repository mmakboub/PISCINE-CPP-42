/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector1.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:46:24 by mmakboub          #+#    #+#             */
/*   Updated: 2023/05/14 18:32:50 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>
#include<string.h>
#include<vector>
 // sequence container : vector, list, forward_list, deque, arrays ont les appeles comme ca car les element dans ces conteneurs sont linearesl un  acote de l autre mais chaque conteneurs a ces proprietes
 //l array : si on a par exemple un array qui contient une taille exacte et on veut ajouter un element on ne peut pas et si on apar exemple un int array[100] et on a travailler seulement avec la premiere case array[0] et on a aura pas besoin des autres l a c est un probleeme car y a un gaspillage de memoire et je ne peux pas supprimer les case supplemenentaire donc on est besoin de travailler avec un array dynamique (parmi les arrays dynamique on trouve le vector : vector<type> v)
//pour les dynamique array je peux modifier la taille commen je veux je peux inserer comme je peux supprimer et comme ca je peux garder de l espace coorrecte 
//DANS LE CAS D UN VECTOR SI J AI int vector<int> v ={0, 1, 2 ,3} et j eveux ajouter un nouvelle element 5 comment ca se passe la procedure : alors je rajoute l element avec v.push_back(5) et tant que vector est un array dynamique donc il va faire un receive pour cette dyamique array en creeant un nouveau array qui contient les anciens element avec le nouveau et on supprimant l ancienne array

int main()
{
    std::vector<int> v; // instancier un objet on presicant son type puisque vector est une clsse template 
    std::vector<int>v(4);// si on veut donnez un size a ce vector on met ce syntaxe mais cette initialisation consiste a cree un vector avec 4 cases initialiser par defaut (l initialisation par defaut dans un vector consiste a ititialiser par 0)par contre  dans un array initialiser une valeur par defaut va donner des valeurs aleatoires et garbage indeterminer 
    //si on veeut changr la valeur initialiser 0 par 10 dans la 1ere case on override
    v[0] = 10;
    std::vector<int> v = {1,2,3,4,45,3};//une autre maniere d initialisation  
    v.push_back(2); // inserer dans la fin 
    std::vector<int> v2(v); // appeler la constructeur de copie pour copier les donnes dans c a v2 doonc v2 contient tout le data de v
    std::cout << v2[0] << std::endl; //il va aussi afficher 10
    std::vector<int> v(5, 100);
     std::vector<int> v2(6, 200); //il va cree un vecteur avec 5 element qui seront initialiser a 100
     std::cout << v2[0] << std::endl; // il va afficher 200
     v.swap(v2); //il va swaper la valeur originale de v avec v2 et v2 avec v 
    std::cout<<v.back()<<std::endl;//afficher le dernier element dans le vecteur 
    std::cout<<v.front()<<std::endl;//afficher le premier element dans le vecteur 
    std::cout<<v.at(0)<<std::endl;//afficher L element dans le vecteur SELON son index comme si je met v[0] mais la difference c est que parfois dans les anciennes compilateur at() affiche une exception de type out of range
    //parlons mainetenat sur la capacite et le size:
    std::vector<int> v(100);
    std::cout << "size ="<< v.size() << std::endl; // il va afficher 100
    std::cout << "capacity = " << v.capacity() << std::endl; // il va afficher aussi 100 mais si on met v.push_back(5) il y aura une difference
    v.push_back(5); // dans cette etape l ancienne vecteur est supprime et on recoit un nouveau vector avec une nouvelle capacite plus grande avec 50% que la premiere et une nouvelle taille sachant que la capacite change si on un dans un vecteur plus que 3 element 
    v.push_back(2);
    v.pop_back(); // supprimer de derniere element 
    std::cout << "size ="<< v.size() << std::endl; // afficher 101 
    std::cout << "capacity = " << v.capacity() << std::endl; //affiche 150
    std::cout << v.max_size() << std::endl;//le max des element qu'on peut ajouter dans un vecteur, et chaque type de donne a une valeur max differente
    std::cout<< v.empty() <<std::endl; // retourne 1 si le vecteur est vide sinn il renvoie 0
    //affichage du contenu d un vecteur
     std::vector<int> v = {1,2,3,4,45,3};
    for (size_t i(0); i < v.size(); i++)
        std::cout << v[i] << std::endl;
}