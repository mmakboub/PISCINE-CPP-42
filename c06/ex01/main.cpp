/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 05:01:38 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/18 05:17:05 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data {
    int value1;
    float value2;
    char value3;
};

// Fonction serialize
uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

// Fonction deserialize
Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}

int main() {
    // Création d'un objet Data
    Data obj = { 42, 3.14f, 'X' };
    
    // Utilisation de serialize sur l'adresse de l'objet
    uintptr_t serialized = serialize(&obj);
    std::cout << serialized << std::endl;

    
    // Utilisation de deserialize sur la valeur retournée par serialize
    Data* deserialized = deserialize(serialized);
    std::cout << "adresse is "<< deserialized << " value 1: " <<  deserialized->value1 << " value 2: " << deserialized->value2 << " value 3: " << deserialized->value3 << std::endl;
    
    // Vérification que le pointeur d'origine et le pointeur désérialisé sont identiques
    bool success = &obj == deserialized;
    
    return success ? 0 : 1;
}