#include <cstdio>

int Sum()
{
	int a, b, c, d;
	
	printf("Please input\n");
	scanf("%d%d%d%d",&a, &b, &c, &d);
	return a*a + b*b + c*c + d*d;
}

int main(void)
{
	printf("%d",Sum());
	
	return 0;
}