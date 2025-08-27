#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;
Animal::Animal(std::string speciesName,unsigned int discoveryYear){
   species = speciesName;
   year_discovered = discoveryYear;
}

void Animal::display() {
   cout << species << " [" << year_discovered << "]" << endl;
}