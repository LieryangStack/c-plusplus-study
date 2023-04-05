#include <iostream>

using namespace std;

typedef struct student
{
  /* data */
}student_t;

/* 定义一个命名空间 */
namespace spaceA{
  int g_a = 10;
}

namespace spaceB{
  int a = 20;

  namespace spaceC{
    struct teacher{
      int id;
      char name[64];
    };
  }

  namespace spaceD{
    struct teacher{
      int id1;
      char name[64];
    };
  }

  //using namespace spaceC;

}

int main(void){

  /* 方式一： */
  //cout << spaceA::g_a << endl;
  /* 方式二： */
  //using spaceA::g_a;
  //cout << g_a <<endl;
  /* 方式三： */
  using namespace spaceA;
  cout << g_a <<endl;

  /* 使用命名空间的时候一定要引用到最底部 */
  /* 方式一： */
  //spaceB::spaceC::teacher t1;

  /* 方式二： */
  /*using spaceB::spaceC::teacher;
  teacher t1; */

  /* 方式三： */
  using namespace spaceB::spaceC;
  teacher t1 = {12, "liming"};

  cout << t1.name << endl;

  return 0;
}