#include <string>
#include <iostream>

using namespace std;

class Student{
public:
  Student(int id, string name){
    this->id = id;
    this->name = name;
  }
  void printS(){
    cout << "id = " << this->id <<endl;
    cout << "name = " << this->name << endl;
  }
private:
  int id;
  string name;
};


/*创建一个新的学生类，增加score功能*/
class Student2 : public Student{
public:
  Student2(int id, string name, int score) : Student(id, name){
    this->score = score;
  }
  void printS(){
    Student::printS();
    cout << "score = " << this->score << endl;
  }
private:
  int score;
};

int main(){

  Student2 s2(1, "zhang3", 80);
  s2.printS();


  return 0;
}