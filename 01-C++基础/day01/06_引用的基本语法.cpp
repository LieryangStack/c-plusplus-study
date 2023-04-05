#include <iostream>

using namespace std;

/**
 * 1、引用没有定义，是一种关系型声明。声明它和原有某一变量（实体）的关系。
 *    因此，类型与原类型保持一致，且不分配内存。与被引用的变量有相同的地址。
 *    总而言之，变量是一段内存空间的名称，引用就是给名称又起了一个别名（外号）。
 * 2、声明的时候必须初始化，一经声明，不可变更。
 * 3、可对引用，再次引用。多次引用的结果，是某一变量具有多个别名。
 * 4、&符号前面有数据类型时，是引用。其它皆为取地址。
*/

/* int *p = &a */
void
change_value (int *p) {
  *p = 111;
}

/* int & r = a*/
void
change_value1 (int& r) {
  r = 222;
}

int 
main (int argc, char *argv[]) {

  int a = 10;
  int *p = &a;
  int& re = a;

  /* 通过指针修改指向内存数据 */
  *p = 20;
  cout << "a = " << a << endl;
  /* 通过引用修改 */
  re = 30;
  cout << "a = " << a << endl;
  change_value (&a);
  cout << "a = " << a << endl;
  change_value1 (a);
  cout << "a = " << a << endl;

  return EXIT_SUCCESS;
}
