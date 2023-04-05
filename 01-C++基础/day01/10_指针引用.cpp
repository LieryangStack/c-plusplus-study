#include <iostream>
#include <string.h>

using namespace std;

struct teacher{
  int id;
  char name[64];
};


int get_mem(struct teacher **tpp){
  if(tpp == NULL){
    return -2;
  }
  struct teacher *tp = NULL;
  tp = (struct teacher *)malloc(sizeof(struct teacher));
  if(tp == NULL){
    return -1;
  }
  *tpp = tp;
  return 0;
}

void free_teacher(struct teacher **tpp){
  if(tpp == NULL){
    return;
  }
  free(*tpp);
  *tpp = NULL;
}

int get_mem2(struct teacher * &tp){
  tp = (struct teacher *)malloc(sizeof(struct teacher));
  if(tp == NULL){
    return -1;
  }
  tp->id = 300;
  strcpy(tp->name, "wangwu");
  return 0;
}

int free_mem2(struct teacher * &tp){
  if(tp == NULL){
    return -1;
  }
  free(tp);
  tp == NULL;
  return 0;
}

int main(void){

  struct teacher *tp = NULL;

  get_mem(&tp);
  free_teacher(&tp);

  cout << "-------" << endl;

  get_mem2(tp);

  cout << "name = " << tp->name << endl;

  free_mem2(tp);

  return 0;
}