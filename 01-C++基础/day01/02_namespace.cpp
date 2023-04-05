#include <iostream>

/* iostream 提供一个叫命名空间的东西，
 * 标准的命名空间是 std
 */

/* 方式二： */
/* using是一个声明命名空间的关键字 */
#if 0
using std::cout; /* 声明命名空间中的一个变量 */
using std::endl;
using std::cin;
#endif

/* 方式三 */
using namespace std;

int
main(int argc, char *argv[]){

  int a = 0;
#if 0
  /* 方式一： */
  std::cout << "hello world" << std::endl;
#endif

  cout << "hello world" << endl;

  cin >> a;

  cout << a;

  return EXIT_SUCCESS;
}