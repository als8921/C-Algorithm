#include<stdio.h>
int main()
{
	int numlist[10001] = {0, };
	int n;
	scanf("%d",&n);
	int input;
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&input);
		numlist[input]++;
	}
	
	for(int i = 1; i < 10001; i++)
		if(numlist[i]!=0)
			for(int j = numlist[i]; j > 0; j--)
				printf("%d\n",i);
}
