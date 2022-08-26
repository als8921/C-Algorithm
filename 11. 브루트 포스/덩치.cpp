#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	int spec[n][2] = {0, };
	int rank[n] = {0, };
	
	for(int i = 0; i < n; i++)
		rank[i] = 1;
	for(int i = 0; i < n; i++)
	{
		scanf("\n%d%d",&spec[i][0] ,&spec[i][1]);
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(spec[i][0] < spec[j][0] && spec[i][1] < spec[j][1])
			{ 
				rank[i]++;
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d ",rank[i]);
	}
	
}
