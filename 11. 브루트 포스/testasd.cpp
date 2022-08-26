#include<stdio.h>
int main()
{
	int n, count;
	scanf("%d",&n);
	
		int temp = n;
		int ncount = 0;
		while(1)
		{
			
			if(n % 10 == 6)
			{
				printf("n % 10 == 6\n");
				ncount++;
			}	
			else
				ncount = 0;
			
			if(ncount == 3)
			{
				count++;
				printf("=============%d\n",temp);
				break;
			}
			
			
			n /= 10;
			printf("n /= 10 >>> %d\n",n);
			if(n == 0) break;
		}
//		printf("%d",ncount);	
	
		
}

