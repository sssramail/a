#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

	string str;

/*int chek(int a,int d) //2
{
	if (a == d)
	{
		return 0;
	}
	return chek(a += 1,d -= 1);
	else 
	{
		return 1;
	}
}*/

int chek(int st,int en)
{
	if (st > en)
	{
		return 0;
	}
	else if (st == en)
	{
		return chek(st + 1,en - 1);
	}
	else 
	{
		return 1;
	}
}

int main()
{
/*	char c[101] = {0, },r[101] = {0, }; //1
	int n;
	scnaf("%s",&c);
	scanf("%d",&n);
	for (int i = 0;i < n;i++)
	{
		scanf("%s",r);
		if (strcmp(c,r) == 0)
		{
			printf("Yes");
			return 0;
		}
	}
	printf("No");*/
	
/*	int n,c; //2
	char str[101] = {0, };
	
	scanf("%d",&n);
	for (int i = 0;i < n;i++)
	{
		scanf("%s",&str[i]);
	}
	c = chek*/
	
/*	string s;
	cin >> s;
	string bomb;
	cin >> bomb;
	int bomb_size = bomb.size();
	int index = 0;
	while (1)
	{
		index = s.find
	}*/
	
	cin >> str;
	
	
	
	return 0;	
}
