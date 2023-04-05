#pragma once
#include "employee.h"

class Technician : public Employee{
public:
  Technician();
  ~Technician();
  virtual void init();
  /*提供员工薪资的计算方法*/
  virtual void getPay();
  /*升级的方法*/
  virtual void upLevel(int level);
private:
  /*一个月工作了多少小时*/
  int workHour;
  double perHourMoney;
};