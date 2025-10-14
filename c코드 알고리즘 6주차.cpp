#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <vector>

/*int fact(int a) //1
{
	if (a == 1)
	{
		return a;
	}
	else
	{
		return a * fact(a-1);
	}
}*/

/*void fact(int a) //2
{
	if (a == 0)
	{
		return;
	}
	printf("%d",a%10);
	
	fact(a/10);
}*/

/*int tp[1000]; //3

int telpo(int p,int t)
{
	if (t == 0)
	{
		return p;
	}
	return telpo(tp[p],t - 1);
}*/

/*int pls(int n) //4
{
	if (n == 0)
	{
		return n;
	}
	
	return n % 10 + pls(n/10);
}*/

int coka(int n) //5
{
	if (n == 1)
	{
		return 0;
	}
	else if (n%2 == 0)
	{
		return 1 + coka(n / 2);
	}
	else
	{
		return 1 + coka(n * 3 + 1);
	}
}

int main()
{
/*	int n,a; //1
	
	scanf("%d",&n);
	a = fact(n);
	printf("%d",a);*/
	
/*	int n,a; //2
	
	scanf("%d",&n);
	fact(n);*/
	
/*	int n,p,t; //3
	scanf("%d %d %d",&n,&p,&t); 
	for (int i = 1;i <= n;i++)
	{
		scanf("%d",&tp[i]);
	}
	printf("%d",telpo(p,t));*/
	
/*	int n; //4
	
	scanf("%d",&n);
	
	printf("%d",pls(n));*/
	
	int n; /'/5'
	
	scanf("%d",&n);
	
	printf("%d",coka(n));
	
	return 0;	
}
