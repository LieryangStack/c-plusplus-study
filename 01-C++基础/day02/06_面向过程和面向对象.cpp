#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;


class Dog{
public:
  void eat(char *food){
    cout << name << " eat " << food << endl;
  }
  
  char name[64];  
};

/* 面向过程 */
void
eat(class Dog &dog, char *food){
  cout << dog.name << " eat " << food << endl;
}

int main(void){

  Dog dog;
  strcpy(dog.name, "dog");
  
  eat(dog, "pig");

  return 0;
}