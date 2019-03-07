/*冒泡排序*/
#include <iostream>

using namespace std;

int a[10] = {4,6,2,70,56,7,88,99,67,35};

int main(void)
{
	for(int i = 1; i <= 9; i++){
			for(int j = 0; j < 10 - i; j++){
				if(a[j] > a[j + 1])
				{
					int temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
	}
	for(int i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}