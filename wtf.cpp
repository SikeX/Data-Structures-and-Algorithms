#include <stdio.h>
#include <algorithm>

using namespace std;

int a[10] = {32,3,33,54,4,53,31,50,77,35};

bool cmp(int a, int b)
{
	return a > b;
}


int main()
{
	int i;
	
	for(i = 0;i<10;i++)
	printf("%d ",a[i]);
	printf("\n");
	sort(a, a+10, cmp);
	for(i = 0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	
	return 0;
}