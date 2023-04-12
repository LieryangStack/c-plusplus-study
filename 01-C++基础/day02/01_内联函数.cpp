#include <iostream>

using namespace std;

/* 宏函数没有语法检测 */
#define MAX(a, b) \
          (a) > (b) ? (a) : (b)


/* 在代码编译阶段（有语法检测），会把内联函数展开 
 * 如果函数中有复杂的代码，编译器也不会展开代码
 * 1、不能存在任何形式的××循环语句××
 * 2、不能存在××过多××的条件判断语句
 * 3、函数体不能过于庞大
 * 4、××不能××对函数进行取址操作
 */
inline void
printAB(int a, int b){
  cout << "a = " << a << ", b =" << b << endl;
}


int main(void){

  int a = 10;
  int b = 20;
  int c = 0;
  c = MAX(a, b);

#if 0
  for(int i = 0; i < 1000; i++){
    a++;
    b++;
    printAB(a, b);
  }
#endif

  return 0;
}