#include <stdio.h>

/* C语言没有对全局变量重定义的检测 */
int g_val; //bss段
int g_val = 20; //data段

struct student
{
  char name[64];
  int id;
};

enum season{
  SUM,
  AUT,
  WIN
};


/* C语言没有返回值定义也可以通过 
 * C++有严格要求返回值类型
 */
foo(){

  return 10;
}

void test4(){
  int a = 10;
  int b = 20;
  int c = 0;

  /* 左值 右值 */
  c = a < b ? a : b;

  printf("c = %d\n", c);

  /* 不能当左值，返回的是a保存的变量 */
  //(a < b ? a : b) = 50;
  // 10 = 50;

  *(a < b ? &a : &b) = 50;
  printf("a = %d\n", a);

}


int main(void){
  
  int a = 10;
  int b = 20;

  //...

  printf("%d, %d\n", a, b);

  int c = 1;

  printf("%d\n", c);

  /* 通过结构体定义变量一定要使用struct */
  struct student t1;

  test4();

  return 0;
}