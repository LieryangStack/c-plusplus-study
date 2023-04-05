#ifndef _DOG_H__
#define _DOG_H__

#include "Animal.h"

class Dog : public Animal{
public:
  Dog();
  ~Dog();
  virtual void voice();
};


#endif
