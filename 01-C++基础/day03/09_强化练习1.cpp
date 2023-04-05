#include <string.h>
#include <iostream>

using namespace std;

class ABCD{
public:
  ABCD(int a, int b, int c){
    _a = a;
    _b = b;
    _c = c;
    printf("ABCD() construct, a: %d, b: %d, c: %d\n", _a, _b, _c);
  }
  ~ABCD(){
    printf("~ABCD() construct, a: %d, b: %d, c: %d\n", _a, _b, _c);
  }
  int getA(){
    return _a;
  }
private:
  int _a;
  int _b;
  int _c;
};

class MyE{
public:
  MyE() : abcd1(1, 2, 3), abcd2(4, 5, 6), m(10){
    cout << "MyE()" << endl;
  }
  ~MyE(){
    cout << "~MyE()" << endl;
  }
  MyE(const MyE &obj) : abcd1(7, 8, 9), abcd2(10, 11, 12), m(100){
    printf("MyE(cosnt MyE &obj)\n");
  }

  ABCD abcd1;
  ABCD abcd2;
  const int m;
};

int doThing(MyE myel){ 
  printf("doThing() myel.abc1.a: %d\n", myel.abcd1.getA());
  return 0;
}

int run(){
  MyE myE; /*无参构造*/
  doThing(myE); /*拷贝构造*/
  return 0;
}

int run2(){
  printf("run2 start..\n");
  ABCD(400, 500, 600);
  //ABCD abcd = ABCD(400, 500, 600);
  printf("run2 end\n");
  return 0;
}

int main(){

  run2();
  
  return 0;
}