#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;


struct Hero{
  char name[64];
  int sex;
};

void print_hero(struct Hero &h){
  printf("[STRUCT]%s %d\n", h.name, h.sex);
}


class AdvHero{
  public:
    
    char name[64];
    int sex;

    void printHero(){
      cout << "[CLASS]";
      cout << "name = " << name << "  ";
      cout << "sex = " << sex << endl;
    }

  private:

};


class Animal{

  /* {} 以内叫类的内部， 以为叫类的外部 */

  public:

    /* 在public下面定义成员变量、属性、方法 是能够在类的内部和外部都可以访问 */

    char kind[64];
    char color[64];

    void printAnimal(){
      cout << "class name = " << property << endl;
      cout << "kind = " << kind << endl;
      cout << "color = " << color << endl;
    }

  private:
    /* 在private下面定义的成员变量和方法只能够在类的内部访问 */
    char property[64] = "animal";
};


int main(void){

  Hero h;
  strcpy(h.name, "GaiLun");
  h.sex = 1;
  print_hero(h);

  AdvHero advH;
  strcpy(advH.name, "ChunBro");
  advH.sex = 1;

  advH.printHero();

  cout << "-------------" << endl;

  Animal dog;

  strcpy(dog.kind, "dog");
  strcpy(dog.color, "white");

  dog.printAnimal();

  return 0;
}