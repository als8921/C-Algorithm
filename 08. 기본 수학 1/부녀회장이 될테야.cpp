#include<stdio.h>
int main(){
	int a[15][15]={0};
	for(int i = 1; i <= 14; i++) a[0][i] = i;
	
	for(int i = 1; i <= 14; i++)
	{
		for(int j = 1; j <= 14; j++)
		{
			for(int k = 1; k <= j; k++)
			{	
				a[i][j]	+= a[i-1][k];
			}
		}
	}
	int cnt;
	scanf("%d",&cnt);
	for(int i = 0; i < cnt; i++)
	{
		int m,n;
		scanf("%d%d",&m,&n);
		printf("%d\n",a[m][n]);
	}
	
	
}
