#include<stdio.h>
int main()
{
	int m, n;
	scanf("%d%d",&n,&m);
	
	char board[n][m] = { };
	
	for(int i = 0; i < n; i++)
		scanf("%s",board[i]);
	
	int min = 64;
	
	for(int a = 0; a <= n-8; a++)
	{
		for(int b = 0; b <= m-8; b++)
		{
			int wcount = 0, bcount = 0;
			for(int i = a; i < a+8; i++)
			{
				for(int j = b; j < b+8; j++)
				{
					
					if((i+j)%2 == 0) 
					{
						if(board[i][j]=='B')
						{
							wcount++;
						}
						else if(board[i][j]=='W')
						{
							bcount++;
						}
					}
					else
					{
						if(board[i][j]=='W')
						{
							wcount++;
						}
						else if(board[i][j]=='B')
						{
							bcount++;
						}
					}
				}
			}
			
			if(wcount < min) min = wcount;
			if(bcount < min) min = bcount;
		}
		
	}
	printf("%d",min);
	
}
