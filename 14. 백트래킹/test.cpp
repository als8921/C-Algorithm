#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	
	int a[m] = {0};
	
	for(int i = 1; i <= n; i++)//ó�� ���� 1���� n���� �ݺ� 
	{
		printf("---------%d---------\n",i);
		a[0] = i;
		for(int j = 1; j <= m; j++)// j��° ���� �̱� (m-1)��
		{
			for(int k = 1; k <= n; k++)// j��° ���� = k
			{
				a[j] = k;
				for(int s = 0; s < m; s++) printf("%d ",a[s]);
				printf("\n");
			}
		} 
		
	}
}
