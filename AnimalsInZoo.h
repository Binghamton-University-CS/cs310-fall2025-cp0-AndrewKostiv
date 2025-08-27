#pragma once 
#include "Animal.h"

class AnimalsInZoo {
    public:
        AnimalsInZoo(unsigned int numAnimals = 0);
        AnimalsInZoo(Animal* animal, unsigned int numAnimals = 1);

        void display();

    private:
        int numAnimals;
        Animal* animal;

    
};