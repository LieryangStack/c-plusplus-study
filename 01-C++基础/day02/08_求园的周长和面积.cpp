#include <iostream>


using namespace std;


/* 圆的周长 */
double getCircleGirth(double r){
  return 2 * 3.14 * r;
}

/* 圆的面积 */
double getCircleArea(double r){
  return 3.14 * r * r;
}

/* 用面向对象实现 */
/* 圆类 */
class Circle{
public:
  void setR(double r){
    m_r = r;
  }
  double getR(){
    return m_r;
  }
  double getGirth(){
    return 2 * 3.14 * m_r;
  }
  double getArea(){
    return m_r * m_r * 3.14;
  }

private:
  double m_r; /* 圆的私有成员 半径 */
};

int main(void){

  double r = 10; /* 圆的半径 */

  double g = 0;
  double a = 0;

  g = getCircleGirth(r);
  a = getCircleArea(r);

  cout << "R = " << r << endl;
  cout << "Grith = " << g << endl;
  cout << "Area = " << a << endl;

  Circle c;
  c.setR(10);

  cout << "R = " << c.getR() << endl;
  cout << "Grith = " << c.getGirth() << endl;
  cout << "Area = " << c.getArea() << endl;

  return 0;
}