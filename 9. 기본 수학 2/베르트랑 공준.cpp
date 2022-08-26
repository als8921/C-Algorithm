#include<stdio.h>

int num[1000001]={0,};
int main(){
	
	num[0]=-1;
	num[1]=-1;
	for(int k = 2; k <= 250000; k++)
	{
		for(int i = 2; i*k <= 250000; i++)
		{
			num[k*i]=-1;
		}
	}
	
	int n;
	int i = 0;
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		else
		{
			int cnt = 0;
			for(int j = n+1; j <= 2*n; j++)
			{
				if(num[j]==0) cnt++;
			}
			printf("%d\n",cnt);
		}
		i++;
	}
	
	
}
