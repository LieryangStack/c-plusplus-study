#include <iostream>

using namespace std;

struct student {
  int id;
  char name[64];
};

void
my_swap (int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void 
my_swap2 (int& a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

/* student s = s1, 结构体整个值拷贝的动作 */
void
printS (struct student s) {
  cout << s.id << " " << s.name << endl;
  s.id = 100;
}

void
printS1 (struct student *sp) {
  cout << "sp = " << sp << endl;
  cout << sp->id << " " << sp->name << endl;
  sp->id = 100;
}

/* student& s = s1 */
void
printS2 (struct student& s) {
  cout << "s = " << &s << endl;
  cout << s.id << " " << s.name << endl;
  s.id = 300;
}

int 
main (int argc, char *argv[]) {

  int a = 10;
	int b = 20;

	my_swap2(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

  student s1 = { 10, "zhang3" };

	printS(s1);
  /* 指针和引用的效果是一样的 */
	printS1(&s1);
	printS2(s1);


  return EXIT_SUCCESS;
}