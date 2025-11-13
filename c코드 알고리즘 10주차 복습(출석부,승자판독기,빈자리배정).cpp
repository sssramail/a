#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>
#include <utility>
using namespace std;

int main()
{
	int n,m,s;
	
	scanf("%d",&n);
	
	int id[n],ok[n],no[n];
	char name[n],chekname[n];
	
	for (int i = 0;i < n;i++)
	{
		scanf("%d",&id[i]);
		scanf("%s",&name[i]);
		scanf("%d",&ok[i]);
		scanf("%d",&no[i]);
	} 
	
	scanf("%d",&m);
	
	for (int i = 0;i < m;i++)
	{
		scanf("%s",&chekname[i]);
		s = chekname[i];
	}
	
	for (int i = 0;i < m;i++)
	{
		printf("%d %d %d",id[s],ok[s],no[s]);
	}
	
	return 0;
}
