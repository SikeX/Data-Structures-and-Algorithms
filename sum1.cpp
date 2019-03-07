#include <stdio.h>

int Sum(int a, int b)
{
	return a + b;
}

int main(void)
{
	int a, b, x;
	
	printf("please input number\n");
	scanf("%d %d",&a,&b);
	x = Sum(a,b);
	printf("%d\n",x);
	
	return 0;
}