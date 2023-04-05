#include <iostream>

using namespace std;

int main(void){

  int a = 10;

  int &a1 = a;
  int &a2 = a1;

  cout << "a = " << &a << endl;
  cout << "a1 = " << &a1 <<endl;
  cout << "a2 = " << &a2 <<endl;

  return 0;
}