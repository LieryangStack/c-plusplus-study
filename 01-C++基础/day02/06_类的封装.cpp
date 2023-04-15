#include <iostream>

using namespace std;

struct Date {
  int year;
  int month;
  int day;
};

void
init_date (Date& d) {
  cout << "year, month, day" << endl;
  cin >> d.year;
  cin >> d.month;
  cin >> d.day;
}

/* 打印date的接口 */
void
print_date (Date& d) {
  cout << d.year << "年" << d.month << "月" << d.day << "日" << endl;
}

bool
is_leap_year (Date& d) {
  if (((d.year % 4 == 0) && (d.year % 100 != 0)) || (d.year % 400 == 0))
    return true;
  return false;
} 