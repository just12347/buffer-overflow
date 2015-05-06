#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void f2(char* buf,char* input){
  strcpy(&buf[8],&input[0]);
  // printf("strcpy on %0.8x\n", &buf[12]-0x4);
  strcpy(&buf[-4],&input[0]);
  // printf("strcpy on %0.8x\n", &buf[0]-0x4);
  printf("return address:%p\n",  __builtin_return_address(0));
}
void f1(char* input)
{
  int i;
  char buf[8];
  int j;

  i = 0xaaaaaaaa;
  j = 0xaaaaaaaa;
  
  printf("i:%0.8x\n", i);
  printf("&i:%0.8x\n", &i);
  printf("size of i:%d\n", sizeof(i));

  // printf("QUESTION: why %0.8x + %0.8x = %0.8x\n",&i, 0x4,&i+0x4 );
  // printf("i ends:%0.8x\n", &i);

  printf("=============================\n");
  printf("j:%0.8x\n", j);
  printf("&j:%0.8x\n", &j);
  printf("size of j:%d\n", sizeof(j));
  printf("j ends:%0.8x\n", &j+0x1);
  printf("=============================\n");
  printf("&buf0:%0.8x\n", &buf[0]);
  printf("&buf7:%0.8x\n", &buf[7]);
  printf("size of buf[0]:%d\n", sizeof(buf[0]));
  printf("size of buf[7]:%d\n", sizeof(buf[7]));
  printf("buf: from %0.8x to %0.8x\n", &buf[0],&buf[7]);
  printf("=============================\n");
  f2(buf,input);
  printf("=============================\n");
  printf("i:%0.8x\n", i);
  printf("j:%0.8x\n", j);
  printf("=============================\n");
  printf("     ====================    \n");
  printf( "858 | [64][63][62][61]  |  85b\n" );
  printf("     ====================    \n");
  printf( "854 | [ e][ f][ g][ h]  |  857\n" );
  printf("     ====================    \n");
  printf( "850 | [ a][ b][ c][ d]  |  853\n" );
  printf("     ====================    \n");
  printf( "84c | [64][63][62][61]  |  84f\n" );
  printf("     ====================    \n");
  // printf("current address:%p", __ReturnAddress);
  printf(":%p \n%p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p \n:%p \n:%p \n%p \n:%p \n:%p \n%p %p %p \n:%p \n%p %p %p %p %p %p %p %p %p %p %p \n:%p \n%p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p\n\n");
  printf("return address:%p\n",__builtin_return_address(0) );
  // printf("return address:%n",__builtin_return_address(0));
  // printf("%p\n",__builtin_return_address(0) );
  // printf("we can read about formatstring attack on this %s\n",'https://crypto.stanford.edu/cs155/papers/formatstring-1.2.pdf');
  // printf ("%s%s%s%s%s%s%s%s%s%s%s%s");
}
int main(int argc, char *argv[]){
  f1(argv[1]);
  printf("return address:%p\n",  __builtin_return_address(0));
  return 0;
};