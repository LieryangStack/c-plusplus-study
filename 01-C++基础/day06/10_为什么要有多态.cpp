#include <string>
#include <iostream>

using namespace std;

class Yuebuqun{
public:
  Yuebuqun(string kongfu){
    this->kongfu = kongfu;
  }

  virtual void fight(){ /*virtual标识这是一个虚函数*/
    cout << "岳不群"     << "使出了"  \
         << this->kongfu << "打人" << endl;
  }

  string kongfu;
};


class Linpingzhi : public Yuebuqun{
public:
  Linpingzhi(string kongfu) : Yuebuqun(kongfu){

  }
  /*如果说父类中有一个虚函数fight(),子类如果去重写这个虚函数*/
  void fight(){
    cout << "林平之" << "使出了" << this->kongfu << "打人" << endl;
  }
}; 


class Linghunchong : public Yuebuqun{
public:
  Linghunchong(string kongfu) : Yuebuqun(kongfu){

  }
  void fight(){
    cout << "令狐冲" << "使用了" << this->kongfu << "打人" << endl;
  }
};


/*在全局提供一个打斗的方法*/
void fightPeople(Yuebuqun *hero){
  cout << "调用打人的方法" << endl;
  hero->fight();/*希望传递进来的如果是子类，调用子类的fight
                 *如果传递进来的是父类，调用父类的fight
                 *这种行为就是多态行为
                 */
}


/**
 * 多态发生的三个必要条件：
 * 1.要有继承
 * 2.要有虚函数重写
 * 3.父类指针或引用指向子类对象
 */
int main(){

  Yuebuqun *xiaoyy = new Yuebuqun("葵花宝典");

  Linpingzhi *xiaopp = new Linpingzhi("辟邪剑谱");

  Linghunchong *xiaoll = new Linghunchong("独孤九剑");
  

  cout << "-------------" << endl;
  fightPeople(xiaoyy);
  fightPeople(xiaopp);
  fightPeople(xiaoll);
  /* 编译器默认做了一个安全的处理，编译器认为不管传递是子类对象还是父类对象，
   * 如果统一执行父类d方法，那么是一定可以被成功执行。
   */

  delete xiaoyy;
  delete xiaopp;
  delete xiaoll;

  return 0;
}