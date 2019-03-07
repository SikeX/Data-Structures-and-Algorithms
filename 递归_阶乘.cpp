#include <cstdio>

int F(int a)
{
	if(a == 0)
		return 1;
	else
		return F(a - 1) * a;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",F(n));
	
	
	return 0;
}