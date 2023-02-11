/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 22:15:15 by mmakboub          #+#    #+#             */
/*   Updated: 2023/01/26 22:15:46 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Ce type de boucle, que l'on retrouve fréquemment, permet de condenser :

une initialisation ;

une condition ;

une incrémentation.

Voici sa forme :

for (initialisation ; condition ; incrementation)
{

}
Regardons un exemple concret qui affiche des nombres de 0 à 9 :

int main()
{
    int compteur(0);

    for (compteur = 0 ; compteur < 10 ; compteur++)
    {
        cout << compteur << endl;
    }

    return 0;
}*/