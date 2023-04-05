#include <string.h>
#include <iostream>

using namespace std;

class Test{
public:
  /* 默认的无参构造函数 */
  Test(){

  }
  /* 显示提供一个有参数的构造函数，默认的构造函数就不复存在 */
  Test(int x, int y){
    m_x = x;
    m_y = y;
  }

  /* 默认的析构函数,析构是不能重载的 */
  ~Test(){

  }

  void printT(){
    cout << "x = " << m_x << "y = " << m_y << endl;
  }
private:
  int m_x;
  int m_y;
};

int main(void){

  Test t1; /* 调用Test无参构造 */
  t1.printT();

  return 0;
}