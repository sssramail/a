#include <stdio.h>

int main() 
{
	
/*	int N, K;
	int count = 0;
    
    scanf("%d %d", &N, &K);

    

    for (int i = 1; i <= N; i++)
	{
        if (N % i == 0) 
		{
            count++;
            
            if (count == K) 
			{
                printf("%d", i);
                
                return 0;
            }
        }
    }

    printf("0");
    
    int a[10],b[10];
    int score = 0;
    
    for (int i = 0;i < 10;i++)
    {
    	scanf("%d",&a[i]);
	}
	for (int i = 0;i < 10;i++)
	{
		scanf("%d",&b[i]);
		
		if (b[i] < a[i])
		{
			score++;
		}
		else if (b[i] > a[i])
		{
			score--;
		}
		else
		{
			score += 0;
		}
	}
	
	if (score >= 1)
	{
		printf("A");
	}
	else if (score < 0)
	{
		printf("B");
	}
	else 
	{
		printf("D");
	}*/
	
	int n;
	int score = 0;
	
	scanf("%d",&n);
	for (int i = 0; i < n;i++)
	{
		int temp = 0;
		int input;
		
		scanf("%d",&input);
		for (int j = 2;j < input;j++) // 소수 판별 for
		{
			if (input == 1)
			{
				temp = 1;
				break;
			}
			
			if (input % j == 0)
			{
				temp = 1;
				break;
			}
		}
		
		if (temp == 0)
		{
			score++;
		}
	}
	
	printf("%d",score);
    
    return 0;
}
