#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	
	int a[m] = {0};
	
	for(int i = 1; i <= n; i++)//처음 숫자 1부터 n까지 반복 
	{
		printf("---------%d---------\n",i);
		a[0] = i;
		for(int j = 1; j <= m; j++)// j번째 숫자 뽑기 (m-1)번
		{
			for(int k = 1; k <= n; k++)// j번째 숫자 = k
			{
				a[j] = k;
				for(int s = 0; s < m; s++) printf("%d ",a[s]);
				printf("\n");
			}
		} 
		
	}
}
