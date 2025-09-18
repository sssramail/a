#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
/*	int n[10];
	vector<int>a;
	
	scanf("%d",&n);
	
	for (int i = 0;i < 10;i++)
	{
		a.push_back(n[i]);
	}*/

    int n[1000];
    int a = 0, b = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
    }

    for (int i = 10; i < 20; i++)
    {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (n[i] > n[i + 10])
        {
            a++;
        }
        else if (n[i] < n[i + 10])
        {
            b++;
        }
    }

    if (a > b)
    {
        printf("A\n");
    }
    else if (b > a)
    {
        printf("B\n");
    }
    else
    {
        printf("D\n");
    }

    return 0;
		
}
