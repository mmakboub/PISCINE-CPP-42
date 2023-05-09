/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 05:01:38 by mmakboub          #+#    #+#             */
/*   Updated: 2023/04/20 03:24:35 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data {
    char cval;
    float fval;
    int ival;
};
uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}
Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}

int main() {
    Data data = { 'a',4.0f,44};
    
    // Utilisation de serialize sur l'adresse de l'objet
    uintptr_t serialized = serialize(&data);
    std::cout << serialized << std::endl;
    // Utilisation de deserialize sur la valeur retournée par serialize
    Data* deserialized = deserialize(serialized);
    std::cout << "data's value are" << " value 1: " <<  deserialized->cval << " value 2: " << deserialized->fval << " value 3: " << deserialized->ival << std::endl;
    // Vérification que le pointeur d'origine et le pointeur désérialisé sont identiques
    return (&data == deserialized) ? 0 : 1;
}