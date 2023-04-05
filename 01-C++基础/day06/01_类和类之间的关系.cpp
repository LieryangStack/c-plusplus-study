#include <string.h>
#include <iostream>

using namespace std;

class A{
public:
  void func(){
    cout << "funcA" << endl;
  }
  int a;
};

/*类B拥有类A的成员变量，B has A，类B依赖于类A*/
class B{
public:
  void funcB(){

  }
  A a;
};

/*类C的成员方法需要类A的形参 C use A,类C依赖于A*/
class C{
public:
  void funcC(A *a){

  }
};


/*D继承于A，类D如果是继承类A， 类 D is A*/
/*类D继承于A 耦合度很高*/
class D : public A{
public:
  void funcD(){
    cout << this->a << endl;
  }
};

class E : public D{

};


int main(){




  return 0;
}