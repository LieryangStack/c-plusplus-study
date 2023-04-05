#include <string.h>
#include <iostream>

using namespace std;


class A{
public:

  A(int a){
    this->a = a;
  }
  void printA(){
    cout << "a = " << this->a << endl;
    B objB(3000);
    cout << objB.b << endl;
  }

  /*声明友元类 B*/
  friend class B;
private:
  int a;
};


class B{
public:
  friend class A;
  B(int b){
    this->b = b;
  }
  void printB(){
    A objA(100);
    cout << objA.a << endl;
    cout << "b = " << this->b << endl;
  }
private:
  int b;
};


int main(){

  B bObj(200);

  bObj.printB();


  return 0;
}