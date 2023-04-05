#include <string.h>
#include <iostream>

using namespace std;

class A{
public:
  A(){
    cout << "A()..." << endl;
    this->p = new char[64];
    memset(this->p, 0, 64);
    strcpy(this->p, "A String....");
  }
  virtual void print(){
    cout << "A: " << this->p << endl;
  }
  virtual ~A(){
    cout << "~A()..." << endl;
    if(this->p != NULL){
      delete[] this->p;
      this->p = NULL;
    }
  }
private:
  char *p;
};


class B :public A{
public:
  B(){ /*此时会触发A的无参构造*/
    cout << "B()..." << endl; this->p = new char[64];
    memset(this->p, 0, 64);
    strcpy(this->p, "B String....");
  }
  virtual void print(){
    cout << "B: " << this->p << endl;
  }
  virtual ~B(){
    cout << "~B()..." << endl;
    if(this->p != NULL){
      delete[] this->p;
      this->p = NULL;
    }
  }
private:
  char *p;
};



void func(A *ap){
  ap->print();/*在此发生多态*/

  //delete ap;/*此刻触发 ap->~A()析构函数*/
  delete ap; //delete (B *)ap;
}


void test(){

  B *bObj = new B;
  func(bObj);

  //delete bObj;
}


int main(){

  test();


  return 0;
}

//重载 重写 重定义（虚函数重写）
//1.重载 一定是【同一作用域】下
//2.重定义：是发生在两个不同的类中，一个是父类，一个是子类
//          2.1 普通函数重定义(如果父类的普通成员，被子类重新，说是重定义
//          2.2 虚函数重写（如果父类的虚函数，被子类重写，就是虚函数重写，这个函数会发生多态