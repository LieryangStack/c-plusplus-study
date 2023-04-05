#include <iostream>

using namespace std;

void
func(int a = 666){
  cout << "a = " << a << endl;
}

/**
 * 默认参数只能从最后边开始
 * get_volume(int len = 5, int width, int height);  //err
*/
int
get_volume(int len, int width, int height = 5){
  cout << "len = " << len << endl;
  cout << "w = " << width << endl;
  cout << "h = " << height << endl;

  return len * width * height;
}


void 
fun2(int x, int){
  cout << "x = " << x << endl;
}


/**
 * 默认参数和占位参数结合在一起 int = 10
*/
void
fun3(int x , int = 10){
  cout << "x = " << x << endl;
}


int main(void){

  func();
  func(10);

  int len = 10;
  int w = 20;
  int h = 30;

  cout << "volume :\n" << get_volume(len, w) << endl;

  fun3(10);
  fun3(10, 5);

  return 0;
}