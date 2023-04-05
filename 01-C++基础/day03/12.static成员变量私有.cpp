#include <string.h>
#include <iostream>

using namespace std;

class AA{
public:
  AA(int a, int b){
    m_a = a;
    m_b = b;
  }

  int getC(){
    m_c++;
    return m_c;
  }

  static int & ReturnC(){
    return m_c;
  }
private:
  int m_a;
  int m_b;
  /*static 修饰成员变量*/
  static int m_c; /*内存空间没有开辟在栈区或者堆区*/
};

/*静态成员变量的初始化，一定写在类的外边*/
int AA::m_c = 100;

void test(){
  /*只会触发一次*/
  static int a = 10;
  a++;
  cout << a << endl;
}

/*作用域只能在这个文件中使用*/
static void test1(){

}


int main(){

  AA a1(10, 20);
  AA a2(100, 200);
  cout << a1.getC() << endl;
  cout << a2.getC() << endl;
  
  a1.ReturnC() = 200;

  cout << a1.getC() << endl;
  cout << a2.getC() << endl;

  return 0;
}