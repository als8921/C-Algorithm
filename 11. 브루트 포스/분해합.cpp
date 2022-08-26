#include<stdio.h>
int main()
{
	int n, i = 1;
	scanf("%d",&n);
	int temp = n;
	int result = 0;
	
	while(1)
	{
		if(temp/10 != 0)
		{
			temp /= 10;
			i++;
		}
		else break;
	}
	
	
	for(int j = n - 9*i; j < n; j++)
	{
		int s = j;
		int temp = j;
		while(true)
		{
			if(s == 0) break;
			temp += (s%10);
			s /= 10;
		}
		
		if(temp == n)
		{
			result = j;
			break;
		}
	}
	if(n==1) result = 1;
	printf("%d",result);
}
