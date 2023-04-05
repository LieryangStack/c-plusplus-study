#include <string.h>
#include <iostream>

using namespace std;

class A{
public:
  A(int a){
    cout << "A()..." << a << endl;
    m_a = a;
  }
  
  ~A(){
    cout << "~A()..." << endl;
  }
  void printA(){
    cout << "a = " << m_a << endl;
  }
private:
  int m_a;
};

class B{
public:
  /* 构造对象成员的顺序跟初始化列表的顺序无关，
   * 而是跟成员对象定义的顺序有个
   */
  B(A &a1, A &a2, int b): m_a1(a1), m_a2(a2){ 
    cout << "B()(A &a1, A &a2, int b)..." << endl;
    m_b = b;
    /*
     *调用的是赋值操作符函数
     *m_a1 = a1;
     *m_a2 = a2;
    */ 
  }

  B(int a1, int a2, int b): m_a1(a1), m_a2(a2){
    cout <<"B(int a1, int a2, int b)..." << endl;
    m_b = b;
  }

  ~B(){
    cout << "~B().." << endl;
  }

  void printB(){
    cout << "b = " << m_b << endl;
    m_a1.printA();
    m_a2.printA();
  }

private:
  int m_b;
  A m_a1;
  A m_a2;
};

class ABC{

public:
  ABC(int a, int b, int c, int m) : m_m(m) {
    cout << "ABC(int, int, int)" << endl;
    m_a = a;
    m_b = b;
    m_c = c;
  }
  ~ABC(){
    cout << "~ABC()" << endl;
  }

private:
    int m_a;
    int m_b;
    int m_c;
    const int m_m; /*常量*/
    /*
     * 不能赋值，这是语法错误，初始化成员变量一定在成员方法或者初始化列表里
     * int m_a = 10;
     * int m_b = 20;
     */
};

class ABCD{
public:
  ABCD(int a, int b, int c, int d) : m_abc(a, b, c, d){
    m_d = d;
  }
  ABCD(ABC &abc, int d) : m_abc(abc){
    m_d = d;
  }
private:
  ABC m_abc;
  int m_d;
};

int main(){

  A a1(10), a2(100);
  cout << "A complete.." << endl;
  B b(a1, a2, 1000);
  cout << "B complete.." << endl;
  B b1(10, 20 ,300); /* b1 对象最后创建完成*/

  ABC abc(10, 20, 30, 1);
  ABCD abcd(10, 20, 30, 40);
  ABCD abcd1(abc, 40);

  return 0;
}