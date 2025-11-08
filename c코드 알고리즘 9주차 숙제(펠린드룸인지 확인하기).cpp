#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int chek(string a,int st,int en)
{
	if (st >= en)
	{
		return 1;
	}
	else if (a[st] == a[en])
	{
		return chek(a,st + 1,en - 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	string a;
	int n;
	
	cin >> a;
	
	n = chek(a,0,a.size()-1);
	a
	printf("%d",n);
	
	return 0;
}
