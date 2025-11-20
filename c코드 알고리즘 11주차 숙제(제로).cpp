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
	stack <int> s;
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
			s.pop(); 
		}	
	}
	
	while (!s.empty());
	{
		a += s.top();
		s.pop();
	}
	
	printf("%d",a);
	
	return 0;
}
