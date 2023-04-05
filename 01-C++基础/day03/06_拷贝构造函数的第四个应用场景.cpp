#include <iostream>

using namespace std;

class Location{
  public:
  /*带参数的构造函数*/
  Location( int xx = 0, int yy = 0){
    X = xx;
    Y = yy;
    cout << "Constructor Object." << endl;
  }

  /*copy构造函数 完成对象的初始化*/
  Location( const Location & obj){
    X = obj.X;
    Y = obj.Y;
    cout << "Copy Constructor." << endl;
  }

  ~Location(){
    cout << X << "," << Y << " Object destroyed. " << endl;
  }

  int GetX(){return X;}

  int GetY(){return Y;}
  
  private:
  int X;
  int Y;
};

/**
 * g函数 返回一个元素
 * 结论1：函数的返回值是一个元素（复杂类型的），返回
 *        的是一个新的匿名对象（所以会调用匿名对象类的copy构造函数）
 * 结论2：有关匿名对象的去和留
 *        如果用匿名对象 初始化 另外一个同类型的对象，匿名对象转换成有名对象
 *        如果用匿名对象 赋值给 另为一个同类型的对象，匿名对象被析构
*/

Location g(){
  Location temp(1, 2);
  cout << "*temp = " << &temp << endl;
  return temp; /*返回的匿名对象就是temp变量，只不过这个变量可能不会被释放（初始化给其他变量）*/
}

void test1(){
  g();
}

void test2(){
  /**
   * 用匿名对象初始化m，此时C++编译器直接把匿名对象转成m；
   * （扶正）从匿名转成有名字的m
   * 就是将这个匿名对象起了名字m，他们都是同一个对象
  */
  Location m = g();
  cout << "*m = " << &m << endl;
  //printf("匿名对象，被扶正，不会析构掉\n");
  cout << m.GetX() << endl;
}

void test3(){
  /*用匿名对象赋值给m2后，匿名对象被析构*/
  Location m2(1, 2);
  m2 = g();
  //printf("因为用匿名对象=给m2，匿名对象，被析构\n");
  cout << m2.GetX() << endl;
}

int main(void){

  test2();

  cout << "main exit..." << endl;
  
  return 0;
}