#include<stdio.h>
int main()
{
	int m, n;
	scanf("%d%d",&m,&n);
	
	char board[m][n] = {};
	printf("%d%d\n",m,n); 
	
	for(int i = 0; i < m; i++)
	{
		scanf("%s",board[i]);
		printf("%d : clear\n",i);
	}
	
	for(int i = 0; i < m; i++)
	{
		printf("%d : %s\n",i,board[i]);
	}
	
}
