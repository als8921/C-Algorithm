#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b)
{
	if(*(int*)a > *(int*)b) return 1;
	if(*(int*)a < *(int*)b) return -1;
	else return 0;
}

int main()
{
	int n;
	scanf("%d",&n);
	int list[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&list[i]);
	}
	
	qsort(list,n,sizeof(list[0]),compare);
	
	for(int i = 0; i < n; i++)
	{
		printf("%d\n",list[i]);
	}
}
