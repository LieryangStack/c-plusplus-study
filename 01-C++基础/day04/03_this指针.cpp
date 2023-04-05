#include <iostream>

using namespace std;

class Test{
  public:
  Test(int k){
    this->m_k = k;
  }
  int getK() const /* 成员函数尾部出行cosnt，修饰this指针 */
  {
    //this->m_k = 100;/* this指针不是 const Test *类型 */
    //this++;/* this指针是一个常指针, Test * const类型 */
    return this->m_k;
  }
  static int s_getK(){
    return m_k;/* static成员函数，只能返回static成员变量 */
  }
  private:
  int m_k;
};

int main(void){


  return 0;
}