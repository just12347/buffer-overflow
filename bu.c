#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void example1()
{
  int i;
  char buf[8];
  int j;

  i = 0x12345678;
  j = 0xdeadbeef;
  
  printf("i:%0.8x\n", i);
  printf("j:%0.8x\n", j);
  printf("&i:%0.8x\n", &i);
  printf("&j:%0.8x\n", &j);

  printf("&buf0:%0.8x\n", &buf[0]);
  printf("&buf7:%0.8x\n", &buf[7]);

  strcpy(buf, "abcdefghijk"); // a= 0x61
  //buf[8] = 0xab;
  buf[-4] = 0xef;

  printf("i:%0.8x\n", i);
  printf("j:%0.8x\n", j);

}
int main(int argc, char *argv[]){
  example1();
  };