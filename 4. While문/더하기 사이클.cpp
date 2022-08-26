#include<stdio.h>
int main(){
	int n,a,b,cnt=0;
	scanf("%d",&n);
	a=n;
	while(true)
	{
		cnt+=1;
		b=(a/10)+(a%10);
		a=(a%10)*10 + (b%10);
		
		if(a==n) break;
		
	}
	printf("%d",cnt);
	
}
