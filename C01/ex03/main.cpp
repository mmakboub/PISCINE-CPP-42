/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 01:06:41 by mmakboub          #+#    #+#             */
/*   Updated: 2023/02/12 15:44:25 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
int main()
{
        {
            
            Weapon club = Weapon("crude spiked club");
            HumanA bob("Bob", club);//takes references cause in human b it cat take in second parameter NULL     
            bob.attack();
            club.setType("some other type of club");
            bob.attack();
        }
        {
            Weapon club = Weapon("crude spiked club");
            HumanB jim("Jim");
            jim.setWeapon(club);
            jim.attack();
            club.setType("some other type of club");
            jim.attack();
        }
    return 0;
}

/*Dans la classe HumanA, j'ai utilisé une référence pour la variable _weapon car cela permet de conserver un lien direct avec l'objet Weapon passé en argument au constructeur. Si l'objet Weapon est modifié, les modifications seront automatiquement reflétées dans HumanA sans avoir besoin de faire de nouveau un appel à une fonction pour mettre à jour la référence.

Cependant, dans la classe HumanB, je n'ai pas pu utiliser une référence car le constructeur ne peut pas prendre en argument un objet Weapon directement. Au lieu de cela, j'ai utilisé un pointeur vers un objet Weapon, ce qui permet de conserver une référence indirecte à l'objet Weapon en utilisant la fonction setWeapon.*/