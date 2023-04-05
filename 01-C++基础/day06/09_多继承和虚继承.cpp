#include <string.h>
#include <iostream>

using namespace std;

/*家具类*/
class Furniture{
public:
  int m; /*材质*/
};

/* 将父亲类继承爷爷类 改成虚继承，防止儿子在多继承我的时候，
 * 出现爷爷中的变量会拷贝多份
 */
class Bed : virtual public Furniture{
public:
  void sleep(){
    cout << "在床上睡觉" << endl;
  }
};


class Sofa : virtual public Furniture{
public:
  void sit(){
    cout << "在沙发上休息" << endl;
  }
};

/*沙发床类*/
class SofaBed : public Bed, public Sofa{
public:
  void SleepAndSit(){
    sleep();
    sit();
  }
};


int main(){

  Bed b;
  b.m = 1;
  b.sleep();

  Sofa s;
  b.m = 2;
  s.sit();

  cout << "---------" << endl;

  SofaBed sb;
  sb.SleepAndSit();

  cout << sb.m << endl;
  sb.m = 100; /*此时只有一个m*/
  //sb.Bed::m = 100;
  //sb.Sofa::m = 200;

  return 0;
}