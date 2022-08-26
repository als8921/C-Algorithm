#include<stdio.h>
int main(){
	
	long long int a,b,cnt;
	scanf("%lld",&cnt);
	
	while(cnt--)
	{
		scanf("%lld%lld",&a,&b);
		long long int n = 1;
		while(b-a > n*(n+1)) n++;
		
		if(b - a - n*n > 0) printf("%lld\n",2*n);
		else printf("%lld\n",(2*n)-1);
	}
	
}
