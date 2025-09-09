#include <stdio.h>
//int a[1000000];
int main()
{
/*	int n,ai,i = 0; //´Ù ¸øÇ° 
	
	scanf("%d",&n);
	
	for(i = 0;i < n;i++)
	{
		scanf
	}
	
	int i,n,score = 0,b;
	scanf("%d",&n);
	for (i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i = 0;i < n;i++)
	{
		scanf("%c",&b);
		if (a[i] == b)
		{
			score ++;
		}
		
	}
	
	printf("%d",score);
	
	long long n;
	int count = 0;
	int temp = 0;
	
	scanf("%lld",&n);
	
	while(n >= 10)
	{
		temp = 0;
		while (n)
		{
			temp += n%10;
			n /= 10;
		}
		n = temp;
		count++;
	}
	
	printf("%d",count);*/
	
	int n,f = 0;
	int a;
	
	scanf("%d",&n);

	for(int i = 0;i < 5;i++)
	{
		a = 0;
		scanf("%d",&a);
		if (n == a)
		{
			f += 1;
		}
	}
	
	printf("%d",f);
	
	return 0;	
}
