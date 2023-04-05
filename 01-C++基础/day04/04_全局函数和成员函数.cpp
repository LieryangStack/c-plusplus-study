#include <iostream>

using namespace std;

class Test{
  public:
  Test(int a, int b){
    this->a = a;
    this->b = b;
  }
  void printT(){
    cout << "a = " << this->a << ", b =" << this->b << endl;
  }
  int getA(){
    return this->a;
  }
  int getB(){
    return this->b;
  }

  /*成员方法*/
  Test TestAdd(Test &another){
    Test temp(this->a + another.a, this->b + another.b);
    return temp;
  }

  /*+=方法*/
  Test& TestAdd2(Test &another){
    this->a += another.a;
    this->b += another.b;
    return *this; /*如果想返回对象的本身，在成员方法中用*this返回*/
  }

  private:
  int a;
  int b;
};


#if 0
/* 1.在全局提供一个两个Test相加的函数 */
Test 
TetsAdd(Test &t1, Test &t2){

  Test temp(t1.getA() + t2.getA(), t1.getB() + t2.getB());

  return temp;
}
#endif


int main(void){

  Test t1(10, 20);
  Test t2(100, 200);
  //Test t3 = TetsAdd(t1, t2);

  Test t3 = t1.TestAdd(t2);

  /*如果想对一个对象连续调用成员方法，每次都会改变对象本身，成员方法需要返回引用*/

  return 0;
}