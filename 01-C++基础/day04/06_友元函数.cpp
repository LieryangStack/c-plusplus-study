#include <string.h>
#include <math.h>
#include <iostream>

using namespace std;

class Point{
public:
  Point(int x, int y){
    this->x = x;
    this->y = y;
  }


  int getX(){
    return this->x;
  }

  int getY(){
    return this->y;
  }

  /*声明全局函数能够访问私有成员，是我类Point类的一个友元函数*/
  friend double PointDistance(Point &p1, Point &p2);

private:
  int x;
  int y;
};

/*
double PointDistance(Point &p1, Point &p2){
  int dd_x = p1.getX() - p2.getX();
  int dd_y = p1.getY() - p2.getY();
  double dis = sqrt(dd_x * dd_x + dd_y * dd_y);
  return dis;
}
*/

double PointDistance(Point &p1, Point &p2){
  int dd_x = p1.x - p2.y;
  int dd_y = p1.x - p2.y;
  double dis = sqrt(dd_x * dd_x + dd_y * dd_y);
  return dis;
}

class PointManager{
  
};


int main(){

  Point p1(1, 2);
  Point p2(2, 2);

  cout << PointDistance(p1, p2) << endl;


  return 0;
}