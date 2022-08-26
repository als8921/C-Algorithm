#include<stdio.h>
int main()
{
	int a=10,b=10;

	while(scanf("%d%d", &a, &b) != EOF)
	{
		printf("%d\n",a+b);
	}
}
