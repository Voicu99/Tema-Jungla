// Tema Jungla.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::string determinaAnimalele(const std::string& sunete) {
    // Definim o pereche (std::pair) pentru a mapea sunetele la animale
    std::vector<std::pair<std::string, std::string>> sunet_la_animal = {
        {"Grr", "Leu"},
        {"Rawr", "Tigru"},
        {"Sss", "Sarpe"},
        {"Cirip", "Pasare"}
    };

    std::istringstream ss(sunete);
    std::string sunet;
    std::string rezultat;

    while (ss >> sunet) {
        // Iterăm prin vectorul de perechi și verificăm fiecare sunet
        for (const auto& pereche : sunet_la_animal) {
            if (pereche.first == sunet) {
                rezultat += pereche.second + " ";
                break; // Odată ce am găsit un animal, putem sărim la următorul sunet
            }
        }
    }

    return rezultat;
}

int main() {
    std::string sunete;
    std::cout << "Introduceti sunetele auzite separate prin spatii: ";
    std::getline(std::cin, sunete);

    std::string animale = determinaAnimalele(sunete);
    std::cout << "Animalele auzite sunt: " << animale << std::endl;

    return 0;
}
