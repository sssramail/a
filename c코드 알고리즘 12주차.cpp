#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>
#include <utility>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	int m[1000];
	
	scanf("%d",&n);
	
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&m[i]);
	}
	sort(m,m + n);
	for(int i = 0;i < n;i++)
	{
		printf("%d",m[i]);
	}
	
/*	int n;
	int num[10];
	int max3 = 0;
	
	scanf("%d",&n);
	
	int m;
	
	for(int i = 0;i < n;i++)
	{
		
		for(int i = 0;i < 10;i++)
		{
			scanf("%d",num[i]);-
		}
		printf("\n");
	}*/
	
	
	
	return 0;
}
