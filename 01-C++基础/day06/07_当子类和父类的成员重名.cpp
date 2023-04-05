#include <string.h>
#include <iostream>

using namespace std;

class Parent{
public:
  Parent(int a){
    this->a = a;
  }
  int a;
};

class Child : public Parent{
public:
  Child(int p_a, int c_a) : Parent(p_a){
    this->a = a;
  }
  void print(){
    cout << this->a << endl; // child的a
    cout << Parent::a << endl; // parent的a
  }
  int a;
};


int main(){

  Child c(10, 20);
  c.print();

  return 0;
}