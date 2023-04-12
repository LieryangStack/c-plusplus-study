#include <iostream>

using namespace std;


void
printB (const int& re) {
  cout << "re = " << re << endl;
}


int 
main(void) {
  /* 1.如果想对一个常量进行引用，必须是一个const引用 */
  const int a = 10;
  const int &re = a;

  /* 2.相反如果一个普通变量，用一个const引用接收是可以的 */
  int b = 20;
  const int& re2 =b; 

  cout << "b = " << b << endl;
  cout << "re2 = " << re2 << endl;

  b = 30;

  cout << "b = " << b << endl;
  cout << "re2 = " << re2 << endl;

  printB (b);
  printB (a);

  const int &re3 = 10;

  // const int &re3 = 10;  re3 = &10, 编译器临时开辟一个变量temp = 10;
  // const int &re3 = temp

  const int *p = &re3;
  *((int *)p) = 30; /* temp = 30 */

  cout << "*p = " << *p << endl;
  cout << "re3 = " << re3 << endl;

  return EXIT_SUCCESS;
}