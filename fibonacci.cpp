#include <cstdio>
using namespace std;

long long fib(int n)
{
	int i = 0;
	long long a = 0, b = 1, temp = 0;
	while(i < n)
	{
		printf("%lld\n",b);
		temp = b;
		b = a + b;
		a = temp;
		i++;
	}
	
	return a;
}

int main()
{
	int n;
	
	printf("please input number\n");
	scanf("%d",&n);
	printf("fib(%d) = %lld\n", n, fib(n));
	
	return 0;
}