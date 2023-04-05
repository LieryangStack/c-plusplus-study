#include <iostream>

using namespace std;


/* 立方体类 */
class Cube{
public:
  void setABC(int a, int b, int c){
    m_a = a;
    m_b = b;
    m_c = c;
  }
  int getArea(){
    return (m_a * m_b) * 2 + (m_a * m_c) * 2 + (m_b * m_c) *2;
  }
  int getVolume(){
    return (m_a * m_b * m_c);
  }


private:
  int m_a;
  int m_b;
  int m_c;
};

/* 全局函数 */
bool judgeCube(Cube &c1, Cube &c2){
  return false;
}

int main(void){

  Cube c1;
  c1.setABC(10, 20, 30);

  Cube c2;
  c2.setABC(1, 2, 3);

  cout << c1.getVolume() << endl;
  cout << c2.getVolume() << endl;

  return 0;
}