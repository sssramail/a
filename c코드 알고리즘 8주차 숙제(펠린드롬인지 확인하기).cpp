#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

string str;

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
	cin >> str;
	
	str = chek(str);
	
	return 0;
}
