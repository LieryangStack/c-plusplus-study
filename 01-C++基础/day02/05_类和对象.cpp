#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

struct Hero {
  char name[64];
  int sex;
};

void 
printHero (Hero& h) {
  cout << "Hero" << endl;
  cout << "name = " << h.name << endl;
  cout << "sex = " << h.sex << endl;
}

class AdvHero {
public: /* 访问控制权限 */
  char name[64];
  int sex;

  void printHero ();
};

void
AdvHero::printHero () {
  cout << "advHero" << endl;
  cout << "name = " << name << endl;
  cout << "sex = " << sex << endl;
}

/* {} 以内叫类的内部， 以外叫类的外部 */
class Animal {
public :
  char kind[64];
  char color[64];

  /* 在public下面定义成员变量和函数，是能够在类的内部和外部都可以访问的 */
  void printAnimal ();
  void write ();
  void run ();

private:
  /* 在private下面定义的成员变量和方法只能够在类的内部访问 */
  char property[64] = "animal";
};

void
Animal::printAnimal () {
  cout << "kind = " << kind << endl;
  cout << "color = " << color << endl;
}

void
Animal::write () {
  cout << kind << "开始写字了" << endl;
}

void 
Animal::run () {
  cout << kind << "跑起来了" << endl;
}

int 
main () {
  Hero h;

  strcpy (h.name, "gailun");
  h.sex = 1;
  printHero (h);

  AdvHero advH;
  strcpy(advH.name, "ChunBro");
  advH.sex = 1;

  advH.printHero();

  cout << "-------------" << endl;

  Animal dog;

  strcpy(dog.kind, "dog");
  strcpy(dog.color, "white");

  dog.printAnimal();
}