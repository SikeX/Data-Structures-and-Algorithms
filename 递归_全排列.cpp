#include <cstdio>

int p[10];
bool hashtable[10] = {false};

void Full(int index)
{
	int n = 3; 
	if(index == n + 1)
	{
		for(int i = 1; i <=3; i++)
		{
			printf("%d",p[i]);
		}
		printf("\n");
	}
	for(int x = 1; x <= n; x++)
	{
		if(hashtable[x] == false)
		{
			p[index] = x;
			hashtable[x] = true;
			Full(index + 1);
			hashtable[x] = false;
		}
		
	}
	
}

int main()
{
	Full(1);
	
	return 0;
}