#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <vector>

/*int fac(int n)
{
	if (n == 1)
	{
		return n;
	}
	return n * fac(n-1);
}*/

int tp[1000];

int telpo(int p,int t)
{
	if (t == 0)
	{
		return p;
	}
	return telpo(tp[p],t - 1);
}

int main()
{
/*	int n;
	
	scanf("%d",&n);
	printf("%d",fac(n));*/
	
	int n,p,t; 
	scanf("%d %d %d",&n,&p,&t); 
	for (int i = 1;i <= n;i++)
	{
		scanf("%d",&tp[i]);
	}
	printf("%d",telpo(p,t));
	
	return 0;
}
