#include <stdio.h>

int main()
{
/*	int A,B,C;
	
	scanf("%d %d",&A,&B);
	scanf("%d",&C);
	
	B += C;
	
	while  (1)
	{
		if (B >= 60)
		{
			B -= 60;
			A += 1;
		}
		if (A == 24)
		{
			A = 0;
		}
		if (B < 60)
		{
			break;
		}
	}
	
	printf("%d %d",A,B);
	
	int a,b,c,d,e,n = 0;
	
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	a = a * a;
	b = b * b;
	c = c * c;
	d = d * d;
	e = e * e;
	
	n = a + b + c + d + e;
	n = n % 10;
	
	printf("%d",n);*/
	
	int a,b,c,d,n = 0;
	
	for (int i = 0;i < 3;i++)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		
		n = a+b+c+d;
	
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
		printf("\n");
	}
	
	
	return 0;
}
