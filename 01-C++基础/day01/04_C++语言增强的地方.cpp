#include <iostream>

using namespace std;

/**
 * 1、C++可以在变量使用的时候再定义
 *    较旧版本的C语言编译器只允许作用域开始的位置定义
 * 2、在C++，不允许定义多个同名的全局变量
 *    较旧版本的C语言编译器运行定义多个同民变量，最终同名变量会被链接到同一地址空间
 *    eg:
 *       int g_var;
 *       int g_var = 1;
 *    但是，较新的编译器也不允许这样做
 * 3、C++中的struct是一个新类型的定义声明（C语言中的struct定义了一组变量的集合，
 *    C编译器并不认为这是一种新的类型。总而言之，在C++中，定义结构体，可以省去struct关键字）
 * 4、C++中所有的变量和函数都必须要有类型，例如：C语言中函数定义可以，不定义返回值类型
 * 5、新增bool类型关键字（理论上只占用一个字节）
 * 6、三目运算符功能增强（C++三目运算符返回的是变量，而C语言返回的是变量本身）
 *    所以在C++中可以当左值使用
 * 7、C++中const增强
 * 8、枚举变量只能用被枚举出来的元素初始化
*/

/* 2 、C++语言对全局变量的定义检测能力增强 */
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
  /* 3、可以省去struct */
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