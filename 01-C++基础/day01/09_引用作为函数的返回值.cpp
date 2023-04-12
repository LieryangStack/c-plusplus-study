#include <iostream>

using namespace std;

char *
getmem (int num) {
  char *p = NULL;
  p = (char *)malloc(num);

  return p;
}

int
getmem2 (char **pp, int num) {
  char *p = NULL;
  p = (char *)malloc (num);
  *p = '1';
  *pp = p;
  return 0;
}

int 
getA1 () {
  int a = 10;
  /* 返回的是a的值 */
  return a;
}

void
getA2 (int *a) {
  *a = 10;
}

/* 引用作为返回值，不要返回局部变量的引用 */
int&
getA3 () {
  int a = 10;
  return a;
}

int&
getA4 () {
  static int a = 10;
  cout << "a = " << &a << endl;
  return a;
}

int main(void){
  int a = 0;
  char *pp = NULL;

  a = getA1 ();
  pp = getmem (10);

  if (pp) {
    free (pp);
    pp = NULL;
  }

  cout << "---------------------" << endl;

  getmem2 (&pp, 1);
  cout << "*pp = " << *pp << endl;
  if (pp) {
    free (pp);
    pp = NULL;
  }
  
  /* 直接段错误 */
  // int main_a = getA3();
  // cout << "main_a" << main_a << endl;
  
  cout << "--------------------" << endl;

  int &main_a_re = getA4 ();
  cout << "main_a_re = " << &main_a_re << endl;

  /* 引用如果当函数返回值的话，函数可以当左值 */
  getA4 () = 1000;


  return 0;
}