#ifndef _MY_ARRAY__
#define _MY_ARRAY__

#include <iostream>

using namespace std;

class MyArray{
public:
  MyArray();
  MyArray(int len);
  MyArray(const MyArray &anoter);
  ~MyArray();
  
  void setData(int index, int data);
  int getData(int index);

  int getLen();

  void operator=(const MyArray& another);

private:
  int len;
  int *space;
};

#endif
