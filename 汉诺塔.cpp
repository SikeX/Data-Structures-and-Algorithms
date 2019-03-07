#include <cstdio>
using namespace std;

void move(int n, char a, char b, char c)
{
	if    (n == 1)
	{
		printf("%c --> %c\n",a, c);
	}
	else
	{
		move(n - 1, a, c, b);
		move(1, a, b, c);
		move(n - 1, b, a, c);
	}
}

int main()
{
	int n = 3;
	char a = 'A', b = 'B', c = 'C';
	move(n, a, b, c);
	
	return 0;
}