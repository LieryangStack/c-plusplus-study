#include <string.h>
#include <iostream>

using namespace std;


class Student{
public:
  Student(){
    this->id = 0;
    this->name = NULL;
  }
  Student(int id, const char *name){
    this->id = id;
    int len = strlen(name);
    this->name = new char[len + 1];
    strcpy(this->name, name);
  }
  Student(const Student &another){
    this->id = another.id;
    /*深拷贝*/
    int len = strlen(another.name);
    this->name = new char[len + 1];
    strcpy(this->name, another.name);
  }
  ~Student(){
    if(this->name != NULL){
      delete[] this->name;
      this->name = NULL;
      this->id = 0;
    }
  }
  void printS(){
    cout << this->name << endl;
  }
  Student &operator=(const Student &another){
    if(this == &another){
      return *this;
    }
    /*先将自身的额外开辟的空间回收掉*/
    if(this->name == NULL){
      delete[] this->name;
      this->name = NULL;
      this->id = 0;
    }

    /*执行深拷贝*/
    this->id = another.id;
    int len = strlen(another.name);
    this->name = new char[len];
    strcpy(this->name, another.name);

    return *this;
  }
private:
  int id;
  char *name;
};


int main(){

  Student s1(1, "zhang3");
  Student s2 = s1; /*拷贝构造*/

  Student s3(2, "li4");

  s2 = s3; // s2 = 赋值操作符

  s1.printS();
  s2.printS();

  return 0;
}