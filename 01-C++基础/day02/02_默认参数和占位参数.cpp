#include <iostream>

using namespace std;

void 
func (int a = 666) {
  cout << "a = " << a << endl;
}

/**
 * 默认参数只能从最后边开始
 * get_volume (int len = 5, int width, int height); //err
*/
int
get_volume (int len, int width, int height = 5) {
  cout << "len = " << len << endl;
  cout << "w = " << width << endl;
  cout << "h = " << height << endl;

  return len * width * height;
}

void
test (int a, int b = 1, int c =2, int d = 3) {
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;
}

void 
func2(int x, int){
  cout << "x = " << x << endl;
}

/**
 * 默认参数和占位参数结合在一起 int = 10
 * 如果 func3 (int x, int)，调用的时候必须是 func3 (10, 5);
*/
void
func3(int x , int = 10){
  cout << "x = " << x << endl;
}


int 
main (int argc, char* argv[]) {

  /* 如果调用该函数的时候，给定的实参，则不使用默认参数 */
  func (15);
  func ();

  cout << "-----------" << endl;

  test (1, 11);

  func3 (10);
  func3 (10, 5);

  return EXIT_SUCCESS;
}