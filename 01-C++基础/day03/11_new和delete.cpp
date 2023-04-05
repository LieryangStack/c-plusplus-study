#include <string.h>
#include <iostream>

using namespace std;

class Test{
public:
  Test(){
    cout << "Test()" << endl;
    m_a = 0;
    m_b = 0;
  }
  Test(int a, int b){
    cout << "Test(int, int)" << endl;
    m_a = a;
    m_b = b;
  }
  void printT(){
    cout << "printT" << m_a << m_b << endl;
  }
  ~Test(){
    cout << "~Test()" << endl;
  }
private:
  int m_a;
  int m_b;
};

/*C语言中*/
void test1(){
  int *p = (int *)malloc(sizeof(int));
  *p = 10;
  if(p != NULL){
    free(p);
    p = NULL;
  }

  /*开辟数组*/
  int *array_p = (int *)malloc(sizeof(int) *10);
  for(int i = 0; i < 10; i++){
    array_p[i] = i + 1;
  }
  for(int i = 0; i < 10; i++){
    printf("%d ", array_p[i]);
  }
  printf("\n");
  if(array_p != NULL){
    free(array_p);
    array_p = NULL;
  }

  /*开辟类（不能调用构造函数）*/
  Test *t1 = (Test *)malloc(sizeof(Test));
  if(t1 != NULL){
    free(t1);
    t1 = NULL;
  }
}


/*
 * malloc free是函数，标准库 stdlib.h
 * new  delete是操作符
 * new 在堆上初始化一个对象的时候，会触发对象的构造函数，malloc不能
 * free不能触发对象的析构函数
 */
/*C++中*/
void test2(){
  int *p = new int;
  *p = 10;
  if(p != NULL){
    delete p;
    p = NULL;
  }

  /*开辟数组*/
  /*int a(10) 等于 int a = 10*/
  int *array_p = new int[10]; /* new int(10)赋值为10*/
  for(int i = 0; i < 10; i++){
    array_p[i] = i + 1;
  }
  for(int i = 0; i < 10; i++){
   cout << array_p[i] << " ";
  }
  cout << endl;
  if(array_p != NULL){
    delete[] array_p;
    array_p = NULL;
  }

  /*开辟类*/
  Test *tp = new Test(10, 20); /*触发有参构造*/
  if(tp != NULL){
    delete tp;
    tp = NULL;
  }
}

int main(){


  test1();

  cout << "---------------" << endl;

  test2();



  return 0;
}