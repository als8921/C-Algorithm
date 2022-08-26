#include<stdio.h>
#include<math.h>

int n;

void move(int f, int n, int m)
{
	if(f==1) 
	{
		printf("\n%d %d",n ,m);
	}
	else
	{
		move(f-1,n,6-n-m);
		move(1,n,m);
		move(f-1,6-n-m,m);
	} 
}

int main()
{
	scanf("%d",&n);
	printf("%d",(int)pow(2,n)-1);
	move(n, 1, 3);
}	
