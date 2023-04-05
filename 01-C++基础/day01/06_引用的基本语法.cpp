#include <iostream>

using namespace std;

void
change_value1(int *p){
  *p = 11;
}

void
change_value2(int &r){ //&r = a; r是a的别名
  r = 12;
}

int main(void){

  int a = 20;
  int b = 30;

  int *p = &a;
  *p = 30;

  /* int & 使用引用数据类型，re是a的别名 */
  int &re = a; /* 引用一定要初始化 */

  re = 50;

  re = b; /* 让re成为b的引用?? */

  re = 50;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  return 0;
}