#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void f2 (char *j,char *input)
{	
	printf("%s\n",input);
	
	//printf("%d\n",sizeof(j[0]));
	//printf("My stack looks like:\n%p\n%p\n%p\n%p\n%p\n% p\n\n");
	printf("&buf[0]:%0.8x\n",&j[0]);
	printf("&buf[7]:%0.8x\n",&j[7]);
	strcpy(&j[8],input);
	printf("j:%0.8x\n",j);
	//printf("%d\n",sizeof(j[7]));
	printf("&buf[0]:%0.8x\n",&j[0]);
	printf("&buf[7]:%0.8x\n",&j[7]);
	//printf("My stack looks like:\n%p\n%p\n%p\n%p\n%p\n% p\n\n");
}
void f1 (char* input)
{
	int i= 0x12345678;
	char j[8];
	int k= 0xdeadbeef;	
	printf("%d\n",sizeof(i));
	printf("i:%0.8x\n",i );
	printf("&i:%0.8x\n",&i);
	printf("k:%0.8x\n",k);
	printf("%s\n",input);
	f2(j,input);
	printf("i:%0.8x\n",i );
	printf("&i:%0.8x\n",&i);
	printf("k:%0.8x\n",k);
}

int main (int argc , char *argv[])
{
	 
	 f1(argv[1]);

}