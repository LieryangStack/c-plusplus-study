#include <iostream>

using namespace std;

class Sqr{
public:
  Sqr(int a){
    this->a = a;
    cout << "Sqr(int a)..." << endl;
  }
  int operator()(int value){
    cout << " operator()(int value)... " << endl;
    return value * value;
  }
  int operator()(int value1, int value2){
    cout << " operator()(int value1, int value2)... " << endl;
    return value1 * value2;
  }
private:
  int a;
};

void func(int a){

}

int main(void){
  Sqr s(10);
  /* 将一个对象 当成一个普通函数来调用
   * 称这种对象是仿函数，伪函数，函数对象
   */
  int value = s(2); /* s.operator()(2)*/
  cout << value << endl;
  value = s(10, 20);
  cout << value << endl;

  return 0;
}