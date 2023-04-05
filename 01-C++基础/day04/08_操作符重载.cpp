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
  friend Complex complexAdd(Complex &c1, Complex &c2);
  friend Complex operator+(Complex &c1, Complex &c2);
  friend Complex operator-(Complex &c1, Complex &c2);

  /*方法二：写到成员方法中*/
  Complex complexAdd1(Complex &another){
    Complex temp(this->a + another.a, this->b + another.b);
    return temp;
  }

#if 0
  /*操作符重载*/
  Complex operator+(Complex &another){
    Complex temp(this->a + another.a, this->b + another.b);
    return temp;
  }

  Complex operator-(Complex &another){
    Complex temp(this->a - another.a, this->b - another.b);
    return temp;
  }
#endif

private:
  int a; /*实数*/
  int b; /*虚数*/
};

/*方法一：全局写*/
Complex complexAdd(Complex &c1, Complex &c2){
  Complex temp(c1.a + c2.a, c1.b + c2.b);
  return temp;
}


#if 1
/*操作符重载写在全局*/
Complex operator+(Complex &c1, Complex &c2){
  Complex temp(c1.a + c2.a, c1.b + c2.b);
  return temp;
}

Complex operator-(Complex &c1, Complex &c2){
  Complex temp(c1.a - c2.a, c1.b - c2.b);
  return temp;
}
#endif


int main(){

  Complex c1(1, 2);
  Complex c2(2, 4);

  Complex c3 = complexAdd(c1, c2);
  c3.printComplex();

  Complex c4 = c1.complexAdd1(c2);
  c4.printComplex();

  Complex c5 = c1 + c2; // c5 = operator+(c1, c2);
  c5.printComplex();

  Complex c6 = c1 - c2;
  c6.printComplex();

  return 0;
}