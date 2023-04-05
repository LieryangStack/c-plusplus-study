#include <string.h>
#include <iostream>

using namespace std;

/*图形类*/
/*如果说一个类 拥有一个纯虚函数
 *就称这个类是一个抽象类
 *不管这个类中有没有成员属性，只要这个类有纯虚函数，就是一个抽象类，抽象类就是不能够实例化
 */
class Shape{
public:
  /*求图像面积的方法*/
  /*表示图形类声明一个方法getArea(),它是一个纯虚函数，没有函数的实现*/
  virtual double getArea() = 0;
};


/*正方形类*/
/*如果说一个普通类，继承拥有纯虚函数的类，必须要重写这个纯虚函数*/
/*如果说不重写纯虚函数，依然是一个抽象类
 *如果想实例化，必须重写这个父类中所有纯虚函数
 */
class Rect : public Shape{
public:
  Rect(int a){
    this->a = a;
  }
  virtual double getArea(){
    cout << "正方形面积" << endl;
    return a * a;
  }
private:
  int a;
};


class Circle : public Shape{
public:
  Circle(int r){
    this->r = r;
  }
  virtual double getArea(){
    cout << "圆面积" << endl;
    return 3.14 * r * 4;
  }
private:
  int r;
};


class Tri : public Shape{
public:
  Tri(int a, int h){
    this->a = a;
    this->h = h;
  }
  virtual double getArea(){
    cout << "三角形面积" << endl;
    return 0.5 * a * h;
  }
private:
  int a;
  int h;
};


/*面向抽象类写一个架构函数*/
void printArea(Shape *sp){
  sp->getArea();
}


/*业务层 面向的抽象类编程*/
int main(){

  // main中所有使用的变量类型 都是 抽象类shape的类型
  Shape *sp1 = new Rect(10);
  Shape *sp2 = new Circle(20);
  Shape *sp3 = new Tri(2, 2);

  printArea(sp1);
  printArea(sp2);
  printArea(sp3);

  delete sp1;
  delete sp2;
  delete sp3;


  return 0;
}