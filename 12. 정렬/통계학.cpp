#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int compare(const void *a, const void *b)
{
	if(*(int*)a > *(int*)b) return 1;
	if(*(int*)a < *(int*)b) return -1;
	else return 0;
}

int main()
{
	int ave, mid, mode, range;
	int n;
	scanf("%d",&n);
	int a[n];
	
	for(int i = 0; i < n; i++) scanf("%d",&a[i]);
	int sum = 0;
	for(int i = 0; i < n; i++) sum += a[i];
		
	qsort(a,n,sizeof(a[0]),compare);	
	
	int count[8001] = {0};
	for(int i = 0; i < n; i++)
	{
		if(a[i] >= 0)
			count[a[i]]++;
		else
			count[4000-a[i]]++;
	}
	
	int max = 0;
	for(int i = 0; i < 8001; i++)
	{
		if(count[i] > max) max = count[i];
	}	
	
	int modelist[8001] = {0};
	int cnt = 0;
	for(int i = 0; i < 8001; i++)
	{
		if(count[i] == max)
		{
			if(i > 4000) modelist[cnt] = 4000 - i;
			else modelist[cnt] = i;
			cnt++;
		}
	}

	
	qsort(modelist,cnt,sizeof(modelist[0]),compare);
	
	if(cnt > 1) mode = modelist[1];
	else mode = modelist[0]; 
	
	ave = round((float)sum/n);
	
	mid = a[(n-1)/2];
	range = a[n-1]-a[0];
	
	printf("%d\n%d\n%d\n%d",ave,mid,mode,range);
	
	
}
