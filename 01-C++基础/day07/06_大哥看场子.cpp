#include <string.h>
#include <iostream>

using namespace std;

/*大哥的虚衔*/
class BigBrother{
public:
  /*会打人*/
  virtual void fightPeople() = 0;
};


/*东方不败*/
class EastNeverLose : public BigBrother{
public:
  virtual void fightPeople(){
    cout << "使用了葵花宝典去打人" << endl;
  }
};


/*无崖子*/
class Wuyazi : public BigBrother{
  virtual void fightPeople(){
    cout << "使用被冥神功打人" << endl;
  }
};


/*boss*/
void boss_to_order(BigBrother *p){
  p->fightPeople();
}


int main(){

  BigBrother *big_brother = new EastNeverLose;
  BigBrother *wu_ya_zi = new Wuyazi;

  boss_to_order(big_brother);
  boss_to_order(wu_ya_zi);


  delete wu_ya_zi;
  delete big_brother;


  return 0;
}