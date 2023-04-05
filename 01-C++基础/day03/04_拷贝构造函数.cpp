#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

class Test
{
public:
	Test()
	{
		m_x = 0;
		m_y = 0;
	}
	Test(int x, int y)
	{
		m_x = x;
		m_y = y;
	}

	void printT()
	{
		cout << "x =" << m_x << ", y = " << m_y << endl;
	}

	//显示的拷贝构造函数
	Test(const Test &another)
	{
		cout << "Test(const Test &)..." << endl;
		m_x = another.m_x;
		m_y = another.m_y;
	}

	//=赋值操作符
	void operator=(const Test &another)
	{
		m_x = another.m_x;
		m_y = another.m_y;
	}
private:
	int m_x;
	int m_y;
};

int main(void)
{
	Test t1(100, 200); 

	Test t2(t1); 

	t2.printT();

	//构造函数是对象初始化的时候调用
	Test t3; //依然是初始化t3的时候调用t3构造函数，依然是调用t3的拷贝构造函数

	t3 = t1; //调用的不是t3拷贝构造函数，而是t3的赋值操作符函数

  /**
   * Test t3(t1); or Test t3 = t1; 初始化调用的是拷贝构造函数
   * Test t3;
   * t3 = t1; 赋值操作调用 赋值操作函数
   */

	return 0;
}