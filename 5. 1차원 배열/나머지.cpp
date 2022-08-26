#include<stdio.h>
int main(){
	int a[10];
	int rem[42]={0};
	int cnt = 0;
	for(int i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 42; j++)
		{
			if(a[i]%42==j) rem[j]+=1;
		}
	}
	
	for(int j = 0; j < 42; j++)
		{
			if(rem[j]!=0) cnt += 1;
		}
		
	printf("%d",cnt);
}
