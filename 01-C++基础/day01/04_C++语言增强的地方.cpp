#include <iostream>

using namespace std;

/* C++语言对全局变量的定义检测能力增强 */
int g_a;

/**
 * int g_var;
 * int g_var = 10;
 * 
 * C++拒绝这种二义性的做法
 * 
 */

struct student
{
  int id;
  char name[64];
};


void test1(){


}

void test2(){
  /* 可以省去struct */
  student s1;
  s1.id = 20;
  cout << s1.id << endl;
}


void test3(){

  /* true 1 flase 0 只能取这两个值 */

  bool flag = true;
  cout << "flag(true) = " << flag <<endl;
  flag = false;
  cout << "flag(false) = " << flag <<endl;
  flag = 20;
  cout << "flag(20) = " << flag <<endl;

  cout << sizeof(flag) << endl;
}


void test4(){
  int a = 10;
  int b = 20;
  int c = 0;

  c = (a < b) ? a : b;

  cout << "c = " << c << endl;

  /* C++三目运算符可以当左值，返回是a变量 */
  (a < b) ? a : b = 50;

  cout << "a = " << a << endl;

}


void test5(){
  /* 这个a是真正的常量，该常量存放在符号表中，不可以修改 */
  const int a = 10;
  /* 如果对一个常量取地址，编译器会临时开辟一个空间temp，
   * 让这个指针存放这个临时开辟空间temp的地址
   */
  int *p = (int *)&a;
  *p = 20;
  cout << "a = " << a << endl;
  cout << "*p = " << *p << endl;

  int array[a] = { 0 };
}


int main(void){

  test2();
  cout << "<<< test3 <<<" << endl;
  test3();
  cout << "<<< test4 <<<" << endl;
  test4();
  cout << "<<< test5 <<<" << endl;
  test5();

  return 0;
}