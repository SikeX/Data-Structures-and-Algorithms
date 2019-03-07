#include <cstdio>
#include <algorithm>

using namespace std;

struct mooncake
{
	double s;//库存量
	double unit;//单价
	double total;//总价
}moon[10010];

bool cmp(mooncake a, mooncake b)
{
	return a.unit > b.unit;
}

int main()
{
	int n;//种类
	double D;//总需求
	
	scanf("%d%lf",&n,&D);
	for(int i = 0; i < n; i++)
	{
		scanf("%lf",&moon[i].s);
	}
	for(int i = 0; i < n; i++)
	{
		scanf("%lf",&moon[i].total);
		moon[i].unit = moon[i].total/moon[i].s;
	}
	sort(moon, moon + n, cmp);
	double max = 0;
	for(int i = 0; i < n; i++)
	{
		if(moon[i].s <= D )
		{
			max = moon[i].total;
			D -= moon[i].s; 
		}
		else
		{
			max += moon[i].unit * D;
			break;
		}
	}
	printf("%.2f\n",max);

	
	return 0;
}