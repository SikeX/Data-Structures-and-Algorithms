#include <cstdio>

int p[10];
bool hashtable[10] = {false};

void Full(int index, int n)
{
	int count = 0;
	
	if(index == n + 1)
	{
		for(int i = 1; i <= n; i++)
		{
			printf("%d",p[i]);
		}
		printf("\n");
		count++;
	}
	for(int x = 1; x <= n; x++)
	{
		if(hashtable[x]== false)
		{
			p[x] = index;
			hashtable[x] = true;
			Full(index + 1, n);
			hashtable[x] = false;
		}
	}
}

int main()
{
	Full(1,4);
	
	return 0;
}