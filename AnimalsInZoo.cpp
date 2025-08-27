#include "AnimalsInZoo.h"
#include "Animal.h"
#include <iostream>

AnimalsInZoo::AnimalsInZoo(Animal* animal_p, unsigned int numAnimals_p){
    numAnimals = numAnimals_p;
    animal = animal_p;
}

void AnimalsInZoo::display() {
    std::cout << numAnimals << " ";
    if (numAnimals > 0) {
        animal->display();
    }      
}