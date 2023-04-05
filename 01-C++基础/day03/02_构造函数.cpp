#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class Test{
public:

  /* Test类的构造函数,函数名等于类名 */
  Test(){ /* 无参数构造函数 */
    m_x = 0;
    m_y = 0;
    name = (char*)malloc(100);
    strcpy(name, "Li");
  }
  Test(int x, int y){
    m_x = x;
    m_y = y;
    name = (char*)malloc(100);
    strcpy(name, "Li");
  }
  Test(int x){ /* 重载 */
    m_x = x;
    m_y = x;
    name = (char*)malloc(100);
    strcpy(name, "Li");
  }
  /* 析构函数和构造函数都没有返回值
   * 析构函数没有形参
   * 在一个对象被销毁之前，会自行调用析构函数
   */
  ~Test(){
    cout << "~Test()..."<< endl;
    cout << name << endl;
    if(name != NULL){
      free(name);
    }
  }
private:
  int m_x;
  int m_y;
  char *name;
};

int main(void){

  Test t1(10, 1);
  Test t2(2);

  return 0;
}