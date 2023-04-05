#ifndef _ANIMAL__
#define _ANIMAL__

#include<iostream>

using namespace std;

class Animal{
public:
  /*纯虚函数，让子类继承并且出现*/
  virtual void voice() = 0;
  Animal();
  virtual ~Animal();
};


//架构函数
//让动物叫
void letAnimalCry(Animal *animal);


#endif
