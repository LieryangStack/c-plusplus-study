#include "Animal.h"

Animal::Animal(){
  cout << "animal()..." << endl;
}

void letAnimalCry(Animal *animal){
  animal->voice();
  if(animal != NULL){
    delete animal;
  }
}