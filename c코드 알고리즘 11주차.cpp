#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>
#include <utility>
#include <stack>
#include <queue>
using namespace std;

int main()
{
/*	stack <int> s;
	queue <int> q;
	
	for (int i = 0;i < 10;i++)
	{
		int t;
		scanf("%d",&t);
		s.push(t);
		q.push(t);
	}
	while (!s.empty())
	{
		printf("%d ",s.top());
		s.pop();
	}
	printf("\n");
	while (!q.empty())
	{
		printf("%d ",q.front());
		q.pop();
	}*/
	
/*	stack <int> s;
	int n;
	int a;
	
	scanf("%d",&n);
	
	for (int i = 0;i < n;i++)
	{
		int t;
		scanf("%d",&t);
		if (t > 0)
		{
			s.push(t);
		}
		else
		{
			s.pop();
		}	
	}
	for (int i = 0;i < n;i++)
	{
		a += s.top();
		s.pop();
	}
	
	printf("%d",a);*/
	
	queue <int> q;
	int n;
	int t;
	
	scanf("%d",&n);
	
	for (int i = 1;i <= n;i++) //n까지 숫자 받기 
	{
		q.push(i);
	}
	while (q.size() != 1) //하나 남을 때 까지 반복 
	{
		q.pop(); // 제일 위에있는 카드를 바닥에 버림 
		t = q.front(); //제일 위에 있는 카드를 제일 아래에 있는 카드 밑으로 옮긴다 
		q.pop();
		q.push(t);
	}
	
	printf("%d",q.front());
	
	return 0;
}
