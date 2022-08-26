#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	num[0]=-1;
	num[1]=-1;
	for(int k = 2; k <= b; k++)
	{
		for(int i = 2; i*k <= b; i++)
		{
			num[k*i]=-1;
		}
	}
	
	
	for(int i = a; i <=b; i++)
	if(num[i]==0) printf("%d\n",i);
}
