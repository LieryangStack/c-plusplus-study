#include <string.h>
#include <iostream>

using namespace std;

class Parent{
public:
  Parent(){
    cout << "Parent()..." << endl;
    a = 0;
  }
  Parent(int a){
    cout << "Parent(int a)..." << endl;
    this->a = a;
  }
  ~Parent(){
    cout << "~Parent()..." << endl;
  }
  int a;
private:
};


class Child : public Parent{
public:
  /* 在调用子类的构造函数时候，一定会调用父类的构造函数
   * 父类先构造，子类后构造
   */
  Child(int a, int b) : Parent(a){
    cout << "Child(int a, int b)..." << endl;
    this->a = a;
    this->b = b;
  }
  void printC(){
    cout << "b = " << b << endl;
  }
  ~Child(){
    cout << "~Child()..." << endl;
  }
  int b;
};


int main(){

  Child c(10, 20);

  c.printC();


  return 0;
}