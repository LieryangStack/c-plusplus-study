#include <string.h>
#include <iostream>

using namespace std;

/*英雄类*/
class Hero{
public:
  virtual int getAd(){
    return 10;
  }
};


/*超级英雄*/
class AdvHero : public Hero{
public:
  virtual int getAd(){
    return 1000;
  }
};


/*怪兽类*/
class Monster{
public:
  int getAd(){
    return 100;
  }
};


/*战斗方法*/
void PlayerFight(Hero *hp, Monster *mp){
  if(hp->getAd() > mp->getAd()){  /*hp->getAd发生了多态*/
    cout << "英雄胜利，怪兽被打死" << endl;
  } else{
    cout << "英雄挂了，怪兽赢了" << endl;
  }
}


int main(){

  Hero h;
  AdvHero super_h;
  Monster m;

  PlayerFight(&h, &m);
  PlayerFight(&super_h, &m);

  return 0;
}