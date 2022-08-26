#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int max = -1000000, min = 1000000;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i = 0; i < n; i++)
	{
		if(a[i]<min) min=a[i];
		if(a[i]>max) max=a[i];
	}
	
	printf("%d %d", min, max);
}
