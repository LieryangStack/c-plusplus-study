#ifndef _EMPLOYEE_H__
#define _EMPLOYEE_H__

#include <iostream>
#include <string>
using namespace std;

/*抽象员工*/
class Employee{
public:  
  Employee();
  virtual ~Employee();

  /*提供一个现实的初始化员工函数*/
  virtual void init() = 0;
  /*提供员工薪资的计算办法*/
  virtual void getPay() = 0;
  /*提供修改员工级别的方法*/
  virtual void upLevel(int level) = 0;
  /*显示员工的信息*/
	void displayStatus();
  

protected:
  string name; /*姓名*/
  int id; /*编号*/
  double salary; /*薪资*/
  int level; /*级别*/
  static int startNum; /*员工的编号基础值*/
};


#endif
