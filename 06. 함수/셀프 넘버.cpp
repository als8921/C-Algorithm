#include<stdio.h>
int main(){
	int num[10000] = {0};
	for(int i = 1; i <= 10000; i++)
	{
		int d = i;
		for(int j = i; j > 0; j = j/10)
		{
			d += j%10;
		}
		num[i]=d;
	}
	
	for(int i = 1; i<=10000; i++)
	{
		int cnt = 0;
		for(int j = 1; j <= 10000; j++)
		{
			if(i == num[j]) 
			{
				cnt++;
			}
		}
		
		if(cnt==0) printf("%d\n",i);
	}
}
