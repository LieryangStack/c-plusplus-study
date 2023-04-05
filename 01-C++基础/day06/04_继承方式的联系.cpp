#include <string.h>
#include <iostream>

using namespace std;

class A{
private:
  int a;
protected:
  int b;
public:
  int c;
  A(){
    a = 0;
    b = 0;
    c = 0;
  }
  void set(int a, int b, int c){
    this->a = a;
    this->b = b;
    this->c = c;
  }
};


class B : public A{
public:
  void print(){
    //cout << "a = " << a; /*a是父类的私有成员访问不了*/
    cout << "b = " << b; //b此时保护继承，类内部能访问
    cout << "c = " << endl; //c此时是公有成员，类的内部可以访问
  }
};

class C : protected A{
public:
  void print(){
    //cout << "a = " << a; /*a是父类的私有成员访问不了*/
    cout << "b = " << b; /*b在子类中是protected，类的内部可以访问*/
    cout << "c = " << c << endl; /*c子类的protected成员，类的内部可以访问*/
  }
};

class D : private A{
public:
	void	print()
	{
		//cout << "a	=	" << a;					//a是父类的私有成员访问不了
		cout << "b	=	" << b << endl;		 //b 此时是private成员，类的内部可以访问。
		cout << "c	=	" << c << endl;		 //c 此时是private成员，类的内部可以访问。
	}
};


int main(){
  A aa;
  B bb;
  C cc;
  D dd;
  aa.c = 100;
  bb.c = 100; /*b是public继承于A，保持权限不变，c是公有，类的外部可以访问*/
  //cc.c = 100; /*c是protected继承于A，c在此类中是protected成员，类的外部不能访问*/
  //dd.c = 100; /*D private 继承与A， c在此类中private成员，类的外部不能访问*/

  aa.set(1, 2, 3);
  bb.set(10, 20, 30); /*成员方法公有继承，可以访问*/
  //cc.set(40, 50, 60); /*成员方法保护继承，类的外部不可以访问*/
  //dd.set(70, 80, 90); /*成员方法私有继承，类的外部不可以访问*/

  bb.print();
  cc.print(); 
  dd.print();


  return 0;
}