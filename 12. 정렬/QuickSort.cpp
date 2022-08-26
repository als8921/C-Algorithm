#include<stdio.h>

int list[1000001];
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;	
} 

void qsort(int start, int end)
{
	if(start >= end) return;
	
	int pivot = start;
	int i = start + 1;
	int j = end;
	
	while(i <= j)
	{	
		while(i <= end && list[pivot] >= list[i]) i++;
		while(j > start && list[pivot] <= list[j]) j--;
		if(i > j)
		{
			swap(&list[pivot],&list[j]);
			break;
		}
		swap(&list[i],&list[j]);
	}
	
	qsort(start,j-1);
	qsort(j+1,end);
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++) scanf("%d",&list[i]);
	qsort(0,n-1);
	for(int i = 0; i < n; i++) printf("%d\n",list[i]);
}
