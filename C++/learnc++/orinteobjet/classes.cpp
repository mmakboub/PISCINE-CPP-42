/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:06:47 by mmakboub          #+#    #+#             */
/*   Updated: 2023/01/28 19:54:17 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Comme tout objet qui se respecte, le type  string  propose un nombre important d'autres fonctionnalités qui permettent de faire tout ce dont on a besoin. Voyons les principales.

Retenez le vocabulaire de base en POO : "Attribut" et "méthode"
Je vous avais dit qu'un objet était constitué de variables et de fonctions.

En fait, le vocabulaire est un peu différent avec les objets :

Les variables contenues à l'intérieur des objets sont appelées "attributs". On parle aussi de variables membres.

Les fonctions sont appelées "méthodes". On parle aussi de fonctions membres.

Imaginez que chaque méthode (fonction) que propose un objet corresponde à un bouton différent sur la face avant du cube. Pour appeler la méthode d'un objet, on utilise une écriture que vous avez déjà vue : objet.methode()  . On sépare le nom de l'objet et le nom de la méthode par un point.

Cela signifie :

"Sur l'objet indiqué, j'appelle cette méthode".

Traduction : "Sur le cube indiqué, j'appuie sur ce bouton pour déclencher une action".

En théorie, on peut aussi accéder aux variables membres (les attributs) de l'objet de la même manière. Cependant, en POO, il y a une règle très importante : l'utilisateur ne doit pas pouvoir accéder aux variables membres, mais seulement aux fonctions membres (les méthodes). On en reparlera plus en détail juste après ce chapitre.

Je vous avais dit qu'il était facile de distinguer les objets des variables car on les utilisait différemment. Voici donc un premier exemple. La notation avec le point pour appeler une méthode de l'objet est propre aux objets. On ne peut pas faire ça avec les variables.*/

/*Utilisez les méthodes du type string
La méthode size()
Vous le savez déjà, la méthode size() permet de connaître la longueur de la chaîne actuellement stockée dans l'objet de type string  .
Cette méthode ne prend aucun paramètre et renvoie la longueur de la chaîne. Vous venez de découvrir qu'il s'agit d'une règle générale, mais nous l'avions déjà fait avant ; il faut appeler la méthode de la manière suivante :
maChaine.size()
Essayons cela dans un code complet qui affiche la longueur d'une chaîne de caractères :
*/
int main()
{
    string maChaine("Bonjour !");
    cout << "Longueur de la chaine : " << maChaine.size();
 
    return 0;
}
/*Longueur de la chaine : 9
La méthode erase()
Cette méthode très simple supprime tout le contenu de la chaîne :
*/

int main()
{
    string chaine("Bonjour !");
    chaine.erase();
    cout << "La chaine contient : " << chaine << endl;
 
    return 0;
}
/*La chaine contient :
Comme on pouvait s'y attendre, la chaîne ne contient plus rien.
Notez que c'est équivalent à chaine = ""; 
*/

/*LES   CLASSES

pour créer un objet, il faut d'abord créer une classe !

Je m'explique : pour construire une maison, vous avez besoin d'un plan d'architecte non ? Eh bien imaginez simplement que la classe c'est le plan, et que l'objet c'est la maison.

Créer une classe, c'est donc dessiner les plans de l'objet. Une fois que vous avez fait la classe (le plan), vous pouvez créer autant d'objets du même type que vous voulez.

On dit qu'un objet est une instance d'une classe.

Cela signifie qu'un objet est la matérialisation concrète d'une classe (tout comme la maison est la matérialisation concrète du plan de la maison).*/

*****NOTEBIEN***** :
/*Pour commencer, je vous rappelle qu'une classe est constituée de :

variables, ici appelées attributs (on parle aussi de variables membres) ;

fonctions, ici appelées méthodes (on parle aussi de fonctions membres).
des attributs (c'est le nom que l'on donne aux variables contenues dans des classes) ;
des méthodes (c'est le nom que l'on donne aux fonctions contenues dans des classes).

*/
class Personnage
{
    
}; // N'oubliez pas le point-virgule à la fin !
 *****EXEMPLE*****
 class Personnage
{
    int m_vie;
    int m_mana;
    string m_nomArme;
    int m_degatsArme;
};
/*Deux ou trois petites choses à savoir sur ce code :

Ce n'est pas une obligation, mais une grande partie des programmeurs (dont moi) ont l'habitude de faire commencer tous les noms des attributs de classe par "m_" ; c'est pour indiquer que c'est une variable membre, c'est-à-dire un attribut. Cela permet de bien différencier les attributs des variables classiques (contenues dans des fonctions, par exemple).

Il est impossible d'initialiser les attributs ici. Cela doit être fait via ce qu'on appelle un constructeur, comme on le verra un peu plus loin.

Comme on utilise un objet string  , il faut bien penser à rajouter un #include <string>  dans votre fichier.*/