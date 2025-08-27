#pragma once
#include <iostream>
#include <string>

class Animal {
   private:
      std::string species;
      unsigned int year_discovered;
   public:
      Animal(std::string speciesName, unsigned int discoveryYear);

      Animal() : species(""), year_discovered(0) {};

      void display();

};