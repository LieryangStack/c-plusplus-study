#include <string.h>
#include <iostream>

using namespace std;

class A{
public:
  static int a;
private:
  
};

int A::a = 100; /*静态成员变量初始化*/

class B : public A{
public:
private:
};

int main(){

  A a1;
  A a2;
  B b1;
  B b2;

  cout << a1.a << endl;
  cout << a2.a << endl;

  B::a = 300;

  cout << a1.a << endl;
  cout << a2.a << endl;

  

  cout << b1.a << endl;
  cout << b2.a << endl;


  return 0;
}