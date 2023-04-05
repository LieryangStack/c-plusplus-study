#include <iostream>

/* 方式二： 声明命名空间中的一个变量 
 * using 是一个声明命名空间的关键字
 */
// using std::cout;
// using std::endl;
// using std::cin;

/* 方式三：声明命名空间中所有变量 */
using namespace std;

int 
main (int argc, char *argv[]) {

  /* 方式一： 直接指定标识符 */
  // std::cout << "hello world" << std::endl;

  /* 方式二 或 方式三 */
  int a = 0;
  cin >> a;
  cout << "hello world, a = " << a << endl;

  return EXIT_SUCCESS;
}