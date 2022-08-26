#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a, b = 0;
	
	a = n / 5;
	
	if(n % 5 == 1)
	{
		a--;
		b = 2;
	}
	if(n % 5 == 2)
	{
		a -= 2;
		b = 4;
	}
	if(n % 5 == 3) b = 1;
	if(n % 5 == 4)
	{
		a--;
		b = 3;
	}
	
	if(a < 0) printf("-1");
	else printf("%d",a+b);
	
	
}
