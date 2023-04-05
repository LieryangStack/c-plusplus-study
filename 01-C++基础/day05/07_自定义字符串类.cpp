#include <string.h>
#include <iostream>
#include "MyString.h"


using namespace std;


class Test{
public:
  Test(int a, const char *name){
    this->a = a;
    /*int len = strlen(name);
    this->name = new char[len + 1];
    strcpy(this->name, name); */
    /*string 类已经进行了深拷贝*/
    this->name = name;
  }
private:
  int a;
  string name;
};


int main(){

  MyString s1("abc");
  MyString s2(s1);
  MyString s3;

  cout << "s1 = "<< s1 << endl;
  cout << "s2 = " << s2 << endl;
  MyString s0 = s1 + s2;
  cout << "s0 = " << s1 + s2 << endl;

  s1[2] = '1';

  cout << "s1 = " << s1 << endl;

  s3 = s1;

  cout << "s3 = " << s3 << endl;

  MyString s4;
  cin >> s4;
  cout << "s4 = " << s4 << endl;

  return 0;
}