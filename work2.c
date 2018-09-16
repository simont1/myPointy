#include <stdio.h>

int main(){
  unsigned int i = 2500000000;
  char * p =  & i;
  printf("%x\n", i);
  printf("%p\n", p);
  for(int i = 0; i < 4; i++){
    printf("%hhx\n", *(p+i));
  }
  for(int i = 0; i < 4; i++){
    *(p+i) += 1;
  }
  printf("%x\n", i);
  printf("%d\n", i);
  for(int i = 0; i < 4; i++){
    *(p+i) += 16;
  }
  printf("%x\n", i);
  printf("%u\n", i);
}
