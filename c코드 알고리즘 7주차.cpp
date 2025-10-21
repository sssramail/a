#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <vector>

int main()
{
/*	char str[1000];
	
	scanf("%[^\n]",str);
	
	for (int i = 0;str[i];i++)
	{
		if('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] - 'A' + 'a';
		}
	}
	
	printf("%s",str);*/
	
/*	char str[1000];
	int count[26] = {0,};
	int result = 0,index,max -= 1;
	
	scanf("%s",str);
	
	for (int i = 0;str[i];i++)
	{
		if('a' <= str[i] && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		count[str[i] - 'A']++;
	}
	for (int i = 0;i< 26;i++)
	{
		if (count[i] > max)
		{
			max = count[i];
			index = i;
			result = 0;
		}
		else if(count[i] == max)
		{
			result++;
		}
	}
	
	if(result>0)
	{
		printf("?");
	}
	else
	{
		printf("%d",max);
	}*/
	
	char str[1000];
	int count[26] = {0,};
	
	
	scanf("%s",str);
	
	for (int i = 0;str[i];i++)
	{
		if('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] - 'A' + 'a';
		}
		count[str[i]]++;
	}
	for (int i = 0;i < 26;i++)
	{
		printf(" %d ",count[i]);
	}
	
	return 0;
}
