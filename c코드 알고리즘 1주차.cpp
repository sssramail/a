#include <stdio.h>

int main()
{
/*	int h,m,s,t;
	scanf("%d %d %d",&h,&m,&s);
	scanf("%d",&t);
	s -= t%60;
	t /= 60;
	if (s < 0)
	{
		s += 60;
		m--;
	}
	m -= t%60;
	t /= 60;
	m -= t;
	if (m < 0)
	{
		m += 60;
		m--;
	}
	printf("%d %d %d",h,m,s);
	
//	5867¿« ¿⁄∏¥ºˆ∏¶ ≥™¥≤ ¥ı«œ¥¬ πÆ¡¶ 
	
	int n,a = 0;
	
	scanf("%d",&n);
	
	while(n>0)
	{
		a = a + n%10;
		n = n/10;
	}
	printf("%d",a);
	
//	∆¿ ¡§«œ±‚ πÆ¡¶ 
	long long n,m,i;
	
	scanf("%lld %lld",&n,&m);
	scanf("%lld",&i);
	
	if (n / m == (i - 1) / m)
	{
		printf("0");
	}
	else
	{
		printf("%lld",(i-1) % m + 1);
	}*/
	
// ¿∑≥Ó¿Ã πÆ¡¶(πÈ¡ÿ)
	
	int a,b,c,d,n,s = 0;
	
	while (s == 3)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
	
		n += a+b+c+d;
	
		if (n == 4)
		{
			printf("E");
		}
		else if (n == 3)
		{
			printf("A");
		}
		else if (n == 2)
		{
			printf("B");
		}
		else if (n == 1)
		{
			printf("C");
		}
		else if (n == 0)
		{
			printf("D");
		}
		s += 1;
	}
	
	return 0;
}
