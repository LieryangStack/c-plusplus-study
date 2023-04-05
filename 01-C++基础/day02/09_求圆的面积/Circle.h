#ifndef _CIRCLE_H__
#define _CIRCLE_H__

class Circle{
public:
  /* 设置半径 */
  void setR(double r);
  /* 得到半径 */
  double getR();
  /* 得到面积 */
  double getArea();
  /* 得到周长 */
  double GetGirth();

private:
  double m_r;
  double m_area;
  double m_girth;
};

#endif