#include <string.h>
#include <iostream>


using namespace std;


void fun1(char *p){
  strcpy(p, "1234");
}


void fun2(char ***ppp){ /* ppp = &pp */
  char *tmp = (char *)malloc(100);
  strcpy(tmp, "1234");
  *ppp = &tmp;
  printf("**ppp = %p\n", **ppp);
  //p = &tmp;
}

void fun3(char **p){ /* ppp = &pp */
  char *tmp = (char *)malloc(100);
  strcpy(tmp, "1234");
  *p = tmp;
}


int main(){

  //数组指针，它是指针，指向一个数组的指针
	//数组指针，指向一维数组的整个数组，而不是首元素地址
	//定义数组指针变量

	int a[10] = { 0 };
	int i = 0;

	//1、先定义数组类型，根据类型定义指针变量
	typedef int A[10]; //A数组类型, [10]代表步长
	A *p = NULL; //p数组指针类型变量
	//p = a; //a代表首元素地址， a 和 &a 一样，最终也是当做&a，警告
	p = &a; //&a代表整个数组首地址

	printf("p:%d, p+1:%d\n", p, p + 1);

	for (i = 0; i < 10; i++)
	{
		//a[]
		// p = &a;
		// *p = *&a -> a
		(*p)[i] = i + 1;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", (*p)[i] );
	}
	printf("\n");



	printf("\n");
	system("pause");
	return 0;
}