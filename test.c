#include <stdio.h>

int f(int n)
{
	if(n<=0) return -1;
	if(n==0) return 0;
	if(n>0) printf("2\n");
	return 1;
}

int main(void)
{
	printf("%d\n",f(-5));
	printf("%d\n",f(3));
	printf("%d\n",f(0));
	printf("%d\n",f(-3));
	printf("%d\n",f(4));
	return 0;
}
