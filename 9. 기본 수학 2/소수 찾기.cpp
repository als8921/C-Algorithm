#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int cnt = 0;
	while(n--)
	{
		int a;
		scanf("%d",&a);
		int divcnt = 0;
		for(int i = 1; i <= a; i++)
		{
			if(a%i==0) divcnt++;
		}
		if(divcnt == 2) cnt++;
	}
	printf("%d",cnt);
}
