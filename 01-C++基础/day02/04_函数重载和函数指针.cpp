#include <iostream>

using namespace std;


int 
func(int a, int b){
  cout << "func1(int a, int b)" << "a = " << a <<  endl;
  return 0;
}

int 
func(int a, int b, int c){
  cout << "func2(int a, int b)" << "a = " << a <<  endl;
  return 0;
}


/* 1.定义一种函数类型 */
typedef int (MY_FUNC)(int, int);


/* 2.定义一个指向这种函数类型的指针类型 */
typedef int(*MY_FUNC_P)(int, int);

int main(void){

  /* 1. */
  MY_FUNC *fp = NULL;
  fp = func;
  fp(10, 20);

  /* 2. */
  MY_FUNC_P fp2 = NULL;
  fp2 = func;
  fp2(20, 30);

  /* 3. */
  int(*fp3)(int , int) = NULL;
  fp3 = func;
  fp3(30, 30);

  fp3 = func; /* fp3 --> func(int, int) */

  fp3(10, 30); /* func(int, int) */

  /* 函数指针不会发生重载 */
  //fp3(10, 20, 30); //err

  int(*fp4)(int, int, int) = func;
  fp4(10, 20, 30);

  return 0;
}