#include <string.h>
#include <iostream>

using namespace std;

/* 构造中调用构造是危险的行为 */
class MyTest{
public:
  MyTest(int a, int b, int c){
    _a = a;
    _b = b;
    _c = c;
  }
  MyTest(int a, int b){
    _a = a;
    _b = b;
    MyTest(a, b, 100); /*产生新的匿名对象*/
  }
  ~MyTest(){
    printf("MyTest~:%d, %d, %d\n", _a, _b, _c);
  }
  int getC(){
    return _c;
  }
private:
  int _a;
  int _b;
  int _c;
};

int main(){


  MyTest t1(1, 2);
  printf("c: %d\n", t1.getC()); /*请问c的值是？*/

  return 0;
}