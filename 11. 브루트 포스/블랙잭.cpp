#include<stdio.h>

int main()
{
	int n, num;
	int min = 0;
	scanf("%d%d",&n ,&num);
	
	int arr[n] = {0,};
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int a = 0; a < n-2; a++)
	{
		for(int b = a + 1; b < n-1; b++)
		{
			for(int c = b + 1; c < n; c++)
			{
				if(arr[a] + arr[b] + arr[c] <= num)
				{ 
					if(arr[a] + arr[b] + arr[c] > min)
						min = arr[a] + arr[b] + arr[c];
				}
			}
		}
	}
	
	printf("%d",min);
	
	
}
