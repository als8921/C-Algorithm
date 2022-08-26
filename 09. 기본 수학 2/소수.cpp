#include<stdio.h>
int main(){
	int a,b,sum = 0,k = 0;
	scanf("%d%d",&a,&b);
	for (int i = a; i <= b; i++)
	{
		int divcnt = 0;
		for(int j = 1; j <= i; j++)
		{
			if(i%j==0) divcnt++;
		}
		if(divcnt == 2) 
		{
			if(k==0) k = i;
			sum += i;
		}
	}
	if(k==0) printf("-1");
	else printf("%d\n%d",sum,k);
}
