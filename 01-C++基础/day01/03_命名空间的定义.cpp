#include <iostream>

using namespace std;

namespace spaceA {
  int g_a = 10;
}
/**
 * 命名空间可以嵌套，使用的时候一定到引用到最低层
*/
namespace spaceB {
  int a = 20;

  namespace spaceC {
    struct teacher {
      int id;
      char name[64];
    };
  }

  namespace spaceD {
    struct teacher {
      int id;
      char name[64];
    };
  }

  // using namespace spaceC;
}

int 
main (int argc, char *argv[]) {

  /* 方式一： 直接指定标识符 */
  // cout << spaceA::g_a << endl;
  /* 方式二： 声明命名空间内部变量 */
  // using spaceA::g_a;
  /* 方式三： 使用整个命名空间内部变量 */
  using namespace spaceA;
  cout << g_a << endl;

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

  return EXIT_SUCCESS;
}