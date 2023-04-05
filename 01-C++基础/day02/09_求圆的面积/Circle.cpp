#include "Circle.h"

/* 设置半径 */
void Circle::setR(double r){
  m_r = r;
}

/* 得到半径 */
double Circle::getR(){
  return m_r;
}
/* 得到面积 */
double Circle::getArea(){
  return m_r * m_r * 3.14;
}
/* 得到周长 */
double Circle::GetGirth(){
  return m_r * 2 * 3.14;
}
