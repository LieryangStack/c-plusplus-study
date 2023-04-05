#ifndef _CAT_H__
#define _CAT_H__

#include "Animal.h"

class Cat : public Animal{
public:
  Cat();
  ~Cat();
  virtual void voice();
};


#endif
