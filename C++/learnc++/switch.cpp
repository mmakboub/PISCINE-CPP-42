/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switch.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:19:01 by mmakboub          #+#    #+#             */
/*   Updated: 2023/01/26 19:22:34 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main()
{
    int nbAnimaux(2);

    switch (nbAnimaux)
    {
        case 0:
            cout << "Vous n'avez pas d'animaux de compagnie" << endl;
            break;

        case 1:
            cout << "C'est super d'avoir un fidele compagnon !" << endl;
            break;

        case 2:
            cout << "Ca doit en faire du monde a la maison !" << endl;
            break;

        default:
            cout << "Votre budget croquettes doit etre important" << endl;
            break;
    }

    return 0;
}

//switch a le meme fonctionement de if else
//le default correspond au else  ("sinon"), et s'exécute si aucun des tests précédents n'est vérifié.
//Les break sont obligatoires si on veut que l'ordinateur arrête les tests une fois que l'un d'eux a réussi. Je vous conseille d'en mettre comme moi à la fin de chaque case 
//switch ne permet de tester que l'égalité. Vous ne pouvez pas tester "Si le nombre d'animaux est supérieur à 2" avec switch  : il faut dans ce cas utiliser if .De plus, switch ne peut travailler qu'avec des nombres entiers ( int  , unsigned int  , char  ). Il est impossible de tester des nombres décimaux ( double  ).