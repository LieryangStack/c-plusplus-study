#include <iostream>


using namespace std;


/**
 * 函数返回值，
 * 函数形参列表（参数的个数，参数类型，参数顺序）
 * 
 * C++增加功能：
 * 如果函数名相同，参数列表不同，是可以编译通过，不会报重定义错误
 * 如果函数名相同，参数列表相同，返回值不同，报重定义
 * 
 * 函数重载 函数名相同 参数列表不同
 * 函数返回值并不是构成函数重载的条件
*/
int
func(int a, char b){
  cout << "func1" << endl;
  return 0;
}


int
func(int a, int b){
  cout << "func2" << endl;
  return 0;
}

/* 要是函数重载的话，不要写默认参数，为了避免调用出现函数冲突 */
char
func(int a, int b, int){
  cout << "func3" << endl;
  return 0;
}


int
func(int a, const char *str){
  cout << "fun4" << endl;
  return 0;
}

/**
 * 1.如果能够严格匹配调用完全匹配的。
 * 2.如果没有完全匹配，调用隐式转换。
 * 3.都匹配不到，调用失败。
*/


int main(void){

  const char *p = "abc";

  func(10, 10, 30);
  func(10, p);

  return 0;
}