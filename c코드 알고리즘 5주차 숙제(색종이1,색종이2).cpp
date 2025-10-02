#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	int map[100][100];
	int x,y;
	
	scanf("%d",&n);
	
	for (int i = 0;i < n;i++)
	{
		scanf("%d %d",&x,&y);
		map[x+10][y+10] = 1;
	}
	
	return 0;
}
