#include<stdio.h>
#include<math.h>

int main()
{
	int i = 0, j = 0, k = 0;
	int n;
	int temp = 1;
	scanf("%d",&n);
	char board[n][n];
	while(1)
	{
		if(temp==n) break;
		else
		{
			temp *= 3;
			k++;
		}
	}
	
	for(i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			board[i][j] = '*';
			
	for(i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
		{
			
			if((j+1) % 3 == 2 && (i+1) % 3 == 2)
			{
				board[i][j] = ' ';
			}
			if(k >= 2)
			{
				for(int cnt = 2; cnt <= k ; cnt++)
				{	
					if((j+1)%(int)pow(3,cnt) > (int)pow(3,cnt-1) && (j+1)%(int)pow(3,cnt) <= (int)2*pow(3,cnt-1) && (i+1)%(int)pow(3,cnt) > (int)pow(3,cnt-1) && (i+1)%(int)pow(3,cnt) <= (int)2*pow(3,cnt-1))
					{
						board[i][j] = ' ';
					}
				}	
			}
			
		}
		
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%c",board[i][j]);
		}
		printf("\n");
	}
}


