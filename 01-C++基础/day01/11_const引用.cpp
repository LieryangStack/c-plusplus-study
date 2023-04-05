#include <iostream>

using namespace std;

int main(void){

  const int a = 10;

  /* 如果想对一个常量进行引用，必须是一个const引用 */

  const int &re = a;

  double val = 3.14;
  const int &ref = val;
  double &ref2 = val;

  /* val 和 ref 地址不一样 */
  cout << "&ref = " << &ref << endl;
  cout << "&val = " << &val << endl;

  cout << " test1 " << ref << " " << ref2 << endl;

  val = 4.14;

  cout << " test2 " << ref << " " << ref2 << endl;

  return 0;
}