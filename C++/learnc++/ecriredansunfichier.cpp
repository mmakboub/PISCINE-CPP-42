/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ecriredansunfichier.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:45:26 by mmakboub          #+#    #+#             */
/*   Updated: 2023/01/28 17:04:38 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   ofstream monFlux("C:/Nanoc/scores.txt");
   //Déclaration d'un flux permettant d'écrire dans le fichier
   // C:/Nanoc/scores.txt
   return 0;
}
/* 
j'ai indiqué entre guillemets le chemin d'accès au fichier Ce chemin doit prendre l'une ou l'autre des deux formes suivantes :

Un chemin absolu, c'est-à-dire montrant l'emplacement du fichier depuis la racine du disque. Par exemple : C:/Nanoc/C++/Fichiers/scores.txt  .

Un chemin relatif, c'est-à-dire montrant l'emplacement du fichier depuis l'endroit où se situe le programme sur le disque. Par exemple : Fichiers/scores.txt si mon programme se situe dans le dossier C:/Nanoc/C++/  .

À partir de là, on peut utiliser le flux pour écrire dans le fichier.

Si le fichier n'existait pas, le programme le créerait automatiquement ! Par contre, il faut que le dossier existe. Dans l'exemple précédent, le dossier C:/Nanoc/C++/Fichiers doit exister. Si ce n'est pas le cas, rien ne sera écrit.

Le plus souvent, le nom du fichier est contenu dans une chaîne de caractères string  . Dans ce cas, il faut utiliser la fonction c_str() lors de l'ouverture du fichier :
*/

//Le plus souvent, le nom du fichier est contenu dans une chaîne de caractères string  . Dans ce cas, il faut utiliser la fonction c_str() lors de l'ouverture du fichier :
int main()
{
    string const nomFichier("C:/Nanoc/scores.txt");
    
    ofstream monFlux(nomFichier.c_str());
    //Déclaration d'un flux permettant d'écrire dans un fichier.
}
/*Des problèmes peuvent survenir lors de l'ouverture d'un fichier, si le fichier ne vous appartient pas ou si le disque dur est plein, par exemple.C'est pour cela qu'il faut toujours tester si tout s'est bien passé.
On utilise pour cela la syntaxe if(monFlux)  Si ce test n'est pas vrai, alors c'est qu'il y a eu un problème et que l'on ne peut pas utiliser le fichier.
*/
int main()
{
    ofstream monFlux("C:/Nanoc/scores.txt");  //On essaye d'ouvrir le fichier

    if(monFlux)  //On teste si tout est OK
    {
        //Tout est OK, on peut utiliser le fichier
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
}

//ecrivons maintenant dans un fichier :
int main()
{
    string const nomFichier("C:/Nanoc/scores.txt");
    ofstream monFlux(nomFichier.c_str());

    if(monFlux)    
    {
        monFlux << "Bonjour, je suis une phrase écrite dans un fichier." << endl;
        monFlux << 42.1337 << endl;
        int age(36);
        monFlux << "J'ai " << age << " ans." << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}

//Si j'exécute ce programme, je retrouve ensuite sur mon disque un fichier scores.txt dont le contenu est présenté comme ceci :Bonjour, je suis une phrase écrite dans un fichier./n 42.1337/n j ai 36ans

Que se passe-t-il si le fichier existe déjà ?
/*Il sera supprimé et remplacé par ce que vous écrivez, ce qui est problématique si l'on souhaite ajouter des informations à la fin d'un fichier préexistant. Pensez par exemple à un fichier qui contiendrait la liste des actions effectuées par l'utilisateur : on ne veut pas tout effacer à chaque fois, on veut juste y ajouter des lignes.

Pour pouvoir écrire à la fin d'un fichier, il faut le spécifier lors de l'ouverture en ajoutant un deuxième paramètre à la création du flux :ofstream monFlux(nomFichier.c_str(), ios::app);.

app est un raccourci pour "append", verbe anglais qui signifie "ajouter à la fin".

Avec cela, plus de problème d'écrasement des données : tout ce qui sera écrit sera ajouté à la fin.*/



