#ifndef __MY_STRING_
#define __MY_STRING_

#include<iostream>
#include<string.h>

using namespace std;

class MyString{
public:
  MyString();
  MyString(int len);
  MyString(const char *str);
  MyString(const MyString &another);
  ~MyString();

  /* 重载操作符[] */
  char &operator[](int index);
  /* 重载操作符<< */
  friend ostream& operator<<(ostream &os, const MyString &s);
  /* 重载操作符>> */
  friend istream& operator>>(istream &is, MyString &s);
  /* 重载操作符== */
  /* 重载操作符!= */
  /* 重载操作符 + */
  MyString operator+(MyString &another);
  /* 重载操作符 = */
  MyString &operator=(const MyString &another);

private:
  int len;
  char *str;
};

#endif
