#include <iostream>

/* 命名空间 */
using namespace std;

int
main(int argc, char *argv[]){

  short a = 0;

  /**
   * cout 就是黑屏幕
   * endl 就是回车
  */
  cout << "hello world" <<endl;

  cin >> a;

  /* 默认识别a的数据类型 */
  cout << "a = " << a << endl;


  return EXIT_SUCCESS;
}


#if 0

#include <stdio.h>

int 
main(void){
  printf("hello world\n");

  return 0;
}

#endif