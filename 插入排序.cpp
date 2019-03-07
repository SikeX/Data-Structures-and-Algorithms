#include <stdio.h>

int main(void)
{
	int a[10] =  {554,54,32,45,3,423,5434,40,23,43};
	
	printf("554,54,32,45,3,423,5434,40,23,43\n");
	for(int i = 1; i < 10; i++)
	{
		int temp = a[i], j = i;
		while(j > 0 && temp < a[j - 1])
		{
			a[j] = a[j - 1];
			j--;
		}
		a[j] = temp;
	}
	
	for(int k = 0; k < 10; k++)
	{
		printf("%d ",a[k]);
	}
	printf("\n");
	
	return 0;
}