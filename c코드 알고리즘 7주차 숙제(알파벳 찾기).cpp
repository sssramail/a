#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <vector>

int main()
{
	int str[1000];
	int cnt[26] = {0,};
	int jcnt[26] = {0,};
	
	scanf("%s",str);
	
	for (int i = 0;str[i];i++)
	{
		
		jcnt[i] += 1;
	}
	
	return 0;
}
