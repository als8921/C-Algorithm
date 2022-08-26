#include<stdio.h>

int main(){
	int num[10001]={0,};	
	num[0]=-1;
	num[1]=-1;
	for(int k = 2; k <= 10000; k++)
	{
		for(int i = 2; i*k <= 10000; i++)
		{
			num[k*i]=-1;
		}
	}
	int cnt;
	scanf("%d",&cnt);
	while(cnt--)
	{
		int n;
		scanf("%d",&n);
		int a, b;
		a = n/2;
		b = n/2;
		while(1)
		{
			if(num[a]==0 && num[b]==0)
			{
				printf("%d %d\n",a,b);
				break;
			}
			else
			{
				a--;
				b++;
			}
			
		}	
	}
}
