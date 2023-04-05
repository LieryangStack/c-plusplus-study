#include <string.h>
#include <iostream>

using namespace std;

class Box{
public:
  Box(int l, int w){
    len = l;
    width = w;
  }
  int volume(){
    int v = len * width * hight;
    cout << "高度是 " << hight << endl;
    cout << "体积是 " << v << endl;
    return v;
  }
  static void changeHight(int h){
    hight = h;
  }
private:
  int len;
  int width;
  static int hight;
};

int Box::hight = 100;


int main(){

  Box b1(3, 10);
  Box b2(5, 20);

  b1.volume();
  b2.volume();

  Box::changeHight(300);

  b1.volume();
  b2.volume();

  return 0;
}