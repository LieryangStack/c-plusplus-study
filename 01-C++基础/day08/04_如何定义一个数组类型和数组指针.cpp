#include <string.h>
#include <iostream>

using namespace std;

/*方法一：直接定义一个数组类型*/
typedef int(ARRAY_INT_10)[10];


int main(){

  int array[10];
  ARRAY_INT_10 *array_10_p = &array;

  printf("%d %d\n", array, array + 1);
  printf("%d %d\n", &array, (&array) + 1);




  return 0;
}