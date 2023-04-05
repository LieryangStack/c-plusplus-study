#include <string.h>
#include <iostream>

using namespace std;

//----------抽象层--------------
//抽象CPU类
class CPU{
public:
  virtual void caculate() = 0;
};


//抽象的Card类
class Card{
public:
  virtual void display() = 0;
};


//抽象的内存类
class Memory{
public: 
  virtual void storage() = 0;
};


class Computer{
public:
  Computer(CPU *cpu, Card *card, Memory *mem){
    this->cpu = cpu;
    this->card = card;
    this->mem = mem;
  }


  void work(){
    this->cpu->caculate();
    this->card->display();
    this->mem->storage();
  }


private:
  CPU *cpu;
  Card *card;
  Memory *mem;
};

//-------实现层-------
//具体的InterlCPU
class InterCPU : public CPU{
public:
  virtual void caculate(){
    cout << "Inter CPU开始计算了" << endl;
  }
};


class InterCard : public Card{
public:
  virtual void display(){
    cout << "Intel Card开始显示了" << endl;
  }
};


class InterMem : public Memory {
public:
  virtual void storage(){
    cout << "Inter mem开始存储了" << endl;
  }
};



//---------------业务层---------------------
int main(){
  // 1.组装第一台intel系列的电脑
  CPU *intelCpu = new InterCPU;
  Card *intelCard = new InterCard;
  Memory *intelMem = new InterMem;

  Computer *com1 = new Computer(intelCpu, intelCard, intelMem);
  com1->work();

  

  return 0;
}