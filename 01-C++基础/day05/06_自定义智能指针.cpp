#include <string.h>
#include <iostream>
#include <memory>

using namespace std;

class A{
public:
  A(int a){
    this->a = a;
    cout << "A(int a)..." << endl;
  }
  ~A(){
    cout << "~A()..." << this->a << endl;
  }
  void func(){
    cout << "a = " << this->a << endl;
  }
private:
  int a;
};

class MyAutoPtr{
public:
  MyAutoPtr(A *ptr){
    this->ptr = ptr; // ptr = new A(10);
    cout << "MyAutoPtr(void *ptr)" << endl;
  }
  ~MyAutoPtr(){
    if(this->ptr != NULL){
      cout << "~MyAutoPtr()..." << endl;
      delete ptr;
      this->ptr =NULL;
    }
  }
  A *operator->(){
    return ptr;
  }
  A &operator*(){
    return *ptr;
  }

private:
  A *ptr;
};


void test1(){
#if 0
  A *ap = new A(10);
  ap->func();
  (*ap).func(); 
  delete ap;
#endif
  auto_ptr<A> ptr(new A(10));
  ptr->func();
  (*ptr).func();
}

void test2(){
  MyAutoPtr my_p(new A(10));
  my_p->func();//my_p.ptr->func()
  (*my_p).func();
}


int main(){

  //test1();
  test2();

  return 0;
}