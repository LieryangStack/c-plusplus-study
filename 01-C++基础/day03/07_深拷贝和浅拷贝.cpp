#include <string.h>
#include <iostream>

using namespace std;

class Teacher{
public:
  
  Teacher(int id, const char *name){
    cout << "Teacher()构造..." << endl;
    m_id = id;
    int len = strlen(name);
    m_name = (char *)malloc(len + 1);
    strcpy(m_name, name);
  }

  ~Teacher(){
    cout << "~Teacher()析构...." << endl;
    if(m_name != NULL){
      free(m_name);
      m_name = NULL;
    }
  }

#if 0
  /* 默认拷贝构造 */
  Teacher(const Teacher &another){
    m_id = another.m_id;
    m_name = another.m_name; /*段错误，多次释放内存*/
  }
#endif

  /* 显示的提供一个拷贝构造函数，来完成深拷贝动作 */
  Teacher(const Teacher &another){
    m_id = another.m_id;
    int len = strlen(another.m_name);
    m_name = (char *)malloc(len + 1);
    strcpy(m_name, another.m_name);
  }

  void printT(){
    cout << "id = " << m_id << ", name = " << m_name << endl;
  }

private:
  int m_id;
  /* 如果使用char name[64]并不需要深拷贝 */
  char *m_name;

};

void test(){
  Teacher t1(1, "zhang3");

  t1.printT();

  /* 调用默认拷贝构造 */
  Teacher t2(t1);

  t2.printT();
}

int main(){
  
  test();
  
  cout << "exit.." << endl;

  return 0;
}