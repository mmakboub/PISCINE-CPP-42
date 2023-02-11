/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:42:55 by mmakboub          #+#    #+#             */
/*   Updated: 2023/01/31 20:14:20 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*Les espaces de noms (ou "namespaces" en anglais) sont une fonctionnalité de C++ qui permet d'isoler les noms d'identificateurs (par exemple, variables, fonctions, classes, etc.) dans des espaces définis. 
Cela peut aider à éviter les conflits de nom et à organiser le code de manière plus claire et plus cohérente. 
Les espaces de noms sont définis à l'aide du mot clé "namespace" et peuvent être accédés en utilisant l'opérateur de portée "::".*/

//Voici un exemple simple d'utilisation d'espaces de noms en C++: 

#include <stdio.h>

// // Définition de l'espace de noms "Math"
// namespace Math {
//   int add(int a, int b) {
//     return a + b;
//   }

//   int subtract(int a, int b) {
//     return a - b;
//   }
// }

// // Définition de l'espace de noms "String"
// namespace String {
//   std::string concat(std::string a, std::string b) {
//     return a + b;
//   }
// }

// int main() {
//   // Utilisation des fonctions définies dans l'espace de noms "Math"
//   int result1 = Math::add(1, 2);
//   int result2 = Math::subtract(5, 3);

//   // Utilisation des fonctions définies dans l'espace de noms "String"
//   std::string result3 = String::concat("hello", " world");

//   std::cout << result1 << std::endl; // affiche 3
//   std::cout << result2 << std::endl; // affiche 2
//   std::cout << result3 << std::endl; // affiche "hello world"

//   return 0;
// }
/*Dans cet exemple, nous avons défini deux espaces de noms "Math" et "String". 
Chacun de ces espaces de noms contient une série de fonctions liées à des opérations mathématiques ou de manipulation de chaînes de caractères. 
En utilisant l'opérateur de portée "::", nous pouvons accéder aux fonctions définies dans ces espaces de noms à partir de l'extérieur de ceux-ci. 
Cela permet de structurer le code de manière claire et de minimiser les risques de conflits de noms.


voila un autre exemple :*/


int gl_var = 1;
int f(void){return 2; }

namespace Boo {
    int gl_var = 3;
    int f (void){return 4; }
}

namespace Bar {
    int gl_var = 5;
    int f (void){return 6; }
}

namespace Muf = Bar; //Cette syntaxe définit un alias pour un espace de noms existant. Le nom "Muf" devient un alias pour l'espace de noms "bar". Cela signifie que tous les identificateurs déclarés dans l'espace de noms "bar" peuvent également être appelés à partir de l'alias "Muf".ce qui montre que les deux noms (bar et Muf) sont des alias pour le même espace de noms.


int main(void)
{
    printf("%d\n", gl_var); //affiche 1
    printf("%d\n", f()); //affiche 2
    printf("%d\n", Boo::gl_var); //affiche 3
    printf("%d\n", Boo::f()); //affiche 4
    printf("%d\n", Bar::gl_var); //affiche 5 
    printf("%d\n", Bar::f()); //affiche 6
    printf("%d\n", Muf::gl_var); //affiche 5
    printf("%d\n",Muf::f()); //affiche 6 
    
    printf("%d\n", gl_var); //affiche 1 
    printf("%d\n", f()); //affiche 2
    
}
/*using namespace std;
name space standard std est un namespace qu'on utilise enormement dans le quelle se trouve toute la biblio standard de c++;il est recommandé d'utiliser l'opérateur de portée "::" pour faire explicitement référence aux identificateurs déclarés dans l'espace de noms standard.*/