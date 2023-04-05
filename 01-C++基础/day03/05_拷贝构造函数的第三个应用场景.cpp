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
 * 会执行 p = b 的操作，p会调用copy的构造函数进行初始化
*/
void func(Location p){
  cout << "func begin" << endl;
  cout << p.GetX() << endl;
  cout << "func end" << endl;
}

void test(){
  /* 对象a 调用带参数的构造函数进行初始化 */
  Location a(1, 2);
  /* 对象b 调用copy构造函数进行初始化 */
  Location b = a;

  cout << "-----" << endl;

  /* b实参取初始化形参p，会调用copy构造函数 */
  func(b);
}

int main(void){
  test();
  return 0;
}