#include <iostream>


using namespace std;


class Test{
public:
  Test(int i){
    mI = i;
  }
  int getI() const { /*成员函数尾部出现 const 修饰的是this指针, this指向的内容不能修改*/
    /* this就是指向调用该成员函数方法的对象地址 
     * this指针是一个常指针， Test *const类型
     */
    return this->mI;
  }
  /* static成员函数，只能返回static成员变量
   * 没有this指针，不属于任何一个对象，属于整个类
   */
  static int getK(){
    return m_k;
  }
private:
  int mI;
  static int m_k;
};

int Test::m_k = 0;


/*
struct Test{
  int mI;
};

void Test_init(Test *pthis, int i){
  pthis->mI = i;
}

int getI(struct Test *pthis){
  return pthis->mI;
}
*/


int main(void){

  Test t1(10); /*Test t1(&t1, 10)*/
  Test t2(20);

  cout << 'h' << endl;

  return 0;
}