#include<stdio.h>
int result = 1;
int factorial(int n)
{
	if(n > 0)
	{
		result *= n;
		factorial(n-1);
		return 0;
	}
	
	if(n == 0)
	return result;	
	
}

int main(){
	int n;
	scanf("%d",&n);
	factorial(n);
	printf("%d",result);
	return 0;
}

