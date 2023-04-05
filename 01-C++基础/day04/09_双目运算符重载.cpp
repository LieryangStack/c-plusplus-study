#include <string.h>
#include <iostream>

using namespace std;


class Complex{
public:
  Complex(int a, int b){
    this->a = a;
    this->b = b;
  }
  void printComplex(){
    cout << "(" << this->a << "," << this->b << "i)" << endl;
  }

  //friend Complex &operator+=(Complex &c1, Complex&c2);
  Complex &operator+=(Complex &another){
    this->a += another.a;
    this->b += another.b;
    return *this;
  }

  /*前++*/
  Complex &operator++(){
    (this->a)++;
    (this->b)++;
    return *this;
  }

  /*后++一定要写占位符 int */
  const Complex operator++(int){
    Complex temp(this->a, this->b);
    (this->a)++;
    (this->b)++;
    return temp;
  }

private:
  int a; /*实数*/
  int b; /*虚数*/
};

/*
Complex &operator+=(Complex &c1, Complex&c2){
  c1.a += c2.a;
  c1.b += c2.b;
  return c1;
}
*/


int main(){

  Complex c1(1, 2);
  Complex c2(2, 4);

  (c1 += c2) += c2;
  c1.printComplex();
  ++++c1;
  c1++;
  c1.printComplex();

  int a;
  

  return 0;
}