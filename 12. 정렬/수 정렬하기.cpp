#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	int a[n];
	int temp;
	
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
		
	for(int i = 0; i < n; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++)
	printf("%d\n",a[i]);
 
}
