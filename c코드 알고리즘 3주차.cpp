#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> v; //늘어날 수 있는 배열 vector 
	
/*	v.push_back(1); //값을 추가하기 
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	
	int n;
	
	scanf("%d",&n);
	
	for(int i =0;i < n;i++) //쓴 순서대로 출력 
	{
		int x;
		scanf("%d",&x);
		v.push_back(x);
	}
	
	for (int i = 0;i < v.size();i++) //쓴 순서대로 출력
	{
		printf("%d ",v[i]);
	}
	
	for (int i = v.size();i >= 0;i--) //역순으로 출력 
	{
		printf("%d\n",v[i]);
	}
	
	int n,a[100000]; //시험 점수 계산 시스템 
	
	scanf("%d",&n);
	
	for(int i =0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int m = 0,s = 100,sum = 0;
	
	for (int i = 0;i < n;i++)
	{
		if(m < a[i])
		{
			m = a[i];
		}
		if(s > a[i])
		{
			s = a[i];
		}
		sum += a[i];
	}
	
	printf("%d",(sum - s-m)/(n-2));
	
	int n,b = 0,a[10000];
	
	scanf("%d",&n);
	
	for(int i =0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int m = 0,index = 0;
	
	for (int i = 1;i < n;i++)
	{
		if(m < a[i] - a[i - 1])
		{
			m = a[i] - a[i - 1];
			index = i;
		}
	}
	
	if (m > 0)
	{
		printf("%d %d",index,index + 1);
	}
	else
	{
		printf("0");
	}*/
	
	int n,a[10000],rank[10000];
	
	scanf("%d",&n);
	
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int m = 0,index;
	
	for (int i = 0;i < n;i++)
	{
		rank[i] = 1;
		for (int j = 0;j < n;j++)
		{
			if (a[i] < a[j])
			{
				rank[i]++;
			}
		}
	}
	for (int i = 0;i < n;i++)
	{
		printf("%d\n",rank[i]);
	}
	
		
	return 0;
}
