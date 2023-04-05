#include <string.h>
#include <iostream>

using namespace std;

//规则1， 只要是父类中的private成员，不管是什么继承方式，儿子都访问不了
//规则2，  如果是公有（public）继承， 儿子中的访问控制权限保持不变。
//规则3，  如果是保护(protected)继承, 儿子中父亲中除了private成员，其余在儿子中都是protected
//规则4，  如果是私有(private)继承， 儿子中的父亲的除了private成员，其余在儿中都是private成员。

class Parent{
public:
  int pub; /*在类的内部 和 外部都能访问*/
protected:
  int pro; /*在类的内部可以访问，在类的外部不可以访问*/
private:
  int pri; /*在类的内部可以访问， 在类的外部不可以访问*/
};

//公有继承
class Child : public Parent{
public:
  void func(){
    /*pub是父类的public成员变量，在public继承类的【内部 外部】可以访问*/
    cout << this->pub << endl; 
    /*pro是父类的protected成员变量，在public继承类的【内部】可以访问，【外部】不可以访问*/
    cout << this->pro << endl; 
    /*pri是父类的private成员变量，在public继承类的【内部 外部】不可以访问*/
    //cout << this->pri << endl; 
  }
};


class Child2 : protected Parent{
public:
  void fun2(){
    /* 此时pub通过protected继承，能够在类的内部访问
     * pub在类的内部可以访问，类的外部访问不了，类的儿子可以访问
     * pub就是protected成员
     */
    this->pub;
  }
};


//私有继承
class Child3 :private Parent
{
public:
	void func3()
	{
		pub;//pub 在类的内部可以访问。在类的内部可以访问，类的外部不能访问。
		    //pub 在儿子中访问不了，说明pub在Child3中是 私有成员
		pro;//pro 根pub的性质是一样， 也是私有成员。
		//pri;
	}
};

int main(){


  Child c1;
  c1.func();

  c1.pub;
  //c1.pro;

  Child2 c2;
  //c2.pub;

  return 0;
}