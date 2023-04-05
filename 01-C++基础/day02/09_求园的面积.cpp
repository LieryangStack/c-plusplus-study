#include <iostream>
#include "Circle.h"

using namespace std;

int main(void){

  Circle r;

  r.setR(2);

  cout << r.getR() << endl;
  cout << r.getArea() << endl;
  cout << r.GetGirth() << endl;

  return 0;
}