#include <iostream>
#include <stdlib.h>
#include <string>
#include "Animal.h"
#include "AnimalsInZoo.h"
using namespace std;


int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal *animal3 = new Animal("Bald Eagle", 1766);
   AnimalsInZoo *animalsInZoo = new AnimalsInZoo(animal3,1);


   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   animal3->display();
   animalsInZoo->display();

   delete animal1;
   delete animal3;
   delete animalsInZoo;
}


// Animal::Animal() {
//    public:
//       Animal(string speciesName, unsigned int discoveryYear) {
//          species = speciesName;
//          year_discovered = discoveryYear;
//       }

//       Animal() : species(""), year_discovered(0) {};

//       void display() {
//          cout << species << " [" << year_discovered << "]" << endl;
//       }

//    private:
//       string species = "";
//       unsigned int year_discovered = 0;
// };