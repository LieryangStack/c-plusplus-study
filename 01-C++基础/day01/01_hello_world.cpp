#include <iostream>

/* 使用整个命令空间 */
using namespace std;

int 
main (int argc, char *argv[]) {
  short a = 0;
  /**
   * cout （character output）就是屏幕
   * endl （end line）就是回车
   * 能够自动识别数据类型，不需要像printf格式化输出
  */
  cout << "hello, a = " << a << endl;

  cin >> a;

  cout << "a = " << a << endl;

  return EXIT_SUCCESS;
}


