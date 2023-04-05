#include <string.h>
#include <iostream>

using namespace std;


class Complex{
public:
  Complex(int a, int b){
    this->a = a;
    this->b = b;
  }
  friend ostream &operator<<(ostream &os, Complex &c);
  friend istream &operator>>(istream &is, Complex &c);
#if 0
  //左移操作符只能写在全局,否则调用的顺序会变反 c1<<cout
  ostream &operator<<(ostream &os){ // c1.operator<<(cout)
    os << "(" << this->a << "," << this->b << "i)";
    return os;
  }
#endif

private:
  int a; /*实数*/
  int b; /*虚数*/
};

ostream &operator<<(ostream &os, Complex &c){ 
  os << "(" << c.a << "," << c.b << "i)";
  return os;
}

istream &operator>>(istream &is, Complex &c){ 
  cout << "a:";
  is >> c.a;
  cout << "b:";
  is >> c.b;
  return is;
}

int main(){

  Complex c1(1, 2);
  Complex c2(2, 4);
  
  cin >> c1;

  cout << c1;
  return 0;
}