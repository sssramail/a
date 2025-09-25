#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main()
{	
/*	int map[100][100];
	int n,m;
	int liq_x,liq_y;
	scanf("%d %d",&n,&m);
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			scanf("%d",&map[i][j]);
			if(map[i][j] == 2)
			{
				liq_x = j;
				liq_y = i;
			}
		}
	}
	
	while (!(map[liq_y+1][liq_x] && map[liq_y][liq_x+1]))
	{
		if(!map[liq_y+1][liq_x])
		{
			liq_y++;
		}
		else if(!map[liq_y][liq_x+1])
		{
			liq_x++;
		}
	}
	printf("%d %d",liq_x,liq_y);
	
	int car[100][100] = {0, };
	int n,m;
	
	scanf("%d %d",&n,&m);
	
	for (int i = 0;i < m;i++)
	{
		int from,to,car_temp;
		scanf("%d %d %d",&from,&to,&car_temp);
		if(car[from][to] == 0 || car[from][to] < car_temp)
		{
			car[from][to] = car_temp;
		}
	}
	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= n;j++)
		{
			printf("%d",car[i][j]);
		}
		printf("\n");
	}*/
	
	int car[100][100] = {0, };
	int n,m; 
	int from,to,car_temp;
	scanf("%d %d",&n,&m);
	
	for (int i = 0;i < m;i++)
	{
		scanf("%d %d %d",&from,&to,&car_temp);
		
	}
	
	return 0;
}
