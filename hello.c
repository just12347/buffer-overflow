#include <stdio.h>

void test()
{
	void * buffer[5];
	//int *ret;
	//ret = (int* )(buffer+7);
	//*ret+=2;
	buffer[6]+=8;
	//char buf[8];
	//int * t;
	//printf("%0.8x\n",&buf[0]);
	//printf("%0.8x\n",&buf[7]);
	//printf("return address:%p\n",  __builtin_return_address(0));
	//t = (int*) (buf+11);
	//(*t)+=11;
}

int main(int argc, char* argv[])
{
	int i=5;
	printf("i:%d\n", i);
	printf("address of i:%0.8x\n",&i );
	test();
	i=99;
	printf("i:%d\n",i);
	//printf("return address:%p\n",  _return_address(0));
}