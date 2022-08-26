#include<stdio.h>
int main()
{
	int n, count = 0;
	scanf("%d",&n);
	
	for(int i = 666; ; i++)
	{
		int ncount = 0;
		int temp = i;
		while(1)
		{
			
			if(temp % 10 == 6)
			{
				ncount++;
			}	
			else
				ncount = 0;
			
			if(ncount == 3)
			{
				count++;
				break;
			}
			
			temp /= 10;
			if(temp == 0) break;
		}
		
		if(count == n)
		{
			printf("%d", i);
			break;
		}
	}
}
