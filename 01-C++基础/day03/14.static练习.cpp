#include <string.h>
#include <iostream>

using namespace std;

class Student{
public:
  Student(int id, double score){
    m_id = id;
    m_score = score;
    m_count++;
    sum_score += score;
  }
  static int getCount(){
    return m_count;
  }
  static double getAvg(){
    return sum_score/m_count;
  }
private:
  int m_id;
  double m_score;
  /*统计学生个数的静态成员变量*/
  static int m_count;
  /*统计学生总分数的静态成员变量*/
  static double sum_score;
};

int Student::m_count = 0;
double Student::sum_score = 0.0;

int main(){


  Student s1(1, 80);
  Student s2(1, 90);
  Student s3(1, 70);

  cout << "学生总人数" << Student::getCount() << endl;
  cout << "学生总分数" << Student::getAvg() << endl;

  return 0;
}