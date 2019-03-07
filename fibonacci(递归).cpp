#include <cstdio>
using namespace std;

int fib(int n)
{
	if(n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n;
	
	printf("please input a number:");
	scanf("%d",&n);
	printf("fib(%d) = %d", n, fib(n));
	
	return 0;
}