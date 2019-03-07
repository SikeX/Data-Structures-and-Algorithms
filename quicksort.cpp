#include <cstdio>

int a[10] = {10,9,8,99,6,5,22,3,2,1};

int Partition(int left, int right)
{
	int temp = a[left];
	while(left < right)
	{
		while(left < right && a[right] > temp)
			right--;
		a[left] = a[right];
		while(left < right && a[left] < temp)
			left++;
		a[right] = a[left];
	}
	a[left] = temp;
	return left;
}

void quicksort(int left, int right)
{
	if(left < right)
	{
		int pos = Partition(left, right);
		quicksort(left, pos - 1);
		quicksort(pos + 1, right);
	}
}

int main()
{
	int left = 0;
	int right = 9;
	quicksort(left, right);

	for(int i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);
		
	}
	
	return 0;
}