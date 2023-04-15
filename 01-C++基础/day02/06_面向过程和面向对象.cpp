#include <iostream>

using namespace std;

/* 园的周长 */
static double
getCircleGirth (double r) {
  return 2 * 3.14 * r;
}

static double
getCircleArea (double r) {
  return 3.14 * r * r;
}

/* 用面向对象实现 */
class Circle {
public:
  void setR (double r);
  double getR ();
  double getGirth ();
  double getArea ();

private:
  /* 园的私有成员 半径 */
  double m_r;
};

void
Circle::setR (double r) {
  m_r = r;
}

double 
Circle::getR () {
  return m_r;
}

double 
Circle::getGirth () {
  return 2 * 3.14 * m_r;
}
double 
Circle::getArea () {
  return m_r * m_r * 3.14;
}

class Circle2
{
public:

	void setR(double r)
	{
		m_r = r;
	}

	double getR()
	{
		return m_r;
	}

	double getArea()
	{
		m_area = m_r*m_r*3.14;
		return m_area;
	}

	double getGirth()
	{
		m_girth = m_r * 2 * 3.14;
		return m_girth;
	}

private:
	double m_r;
	double m_girth; //周长
	double m_area;//面积
};

int
main (int argc, char *argv[]) {
  /* 园的半径 */
  double r = 10;
  double g = 0;
  double a = 0;

  g = getCircleGirth (r);
  a = getCircleArea (r);
  
  cout << "圆的半径是 " << r << endl;
  cout << "圆的周长是 " << g << endl;
  cout << "圆的面积是 " << a << endl;

  cout << "------------" << endl;

  Circle c;

  c.setR (10);

  cout << "圆的半径是" << c.getR() << endl;
	cout << "圆的周长是" << c.getGirth() << endl;
	cout << "圆的面积是" << c.getArea() << endl;

	cout << "------------" << endl;

  Circle2 c2;

	c2.setR(10);

	cout << "圆的半径是" << c2.getR() << endl;
	cout << "圆的周长是" << c2.getGirth() << endl;
	cout << "圆的面积是" << c2.getArea() << endl;


  return 0;
}