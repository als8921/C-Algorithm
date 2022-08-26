#include<stdio.h>
int main(){
	int n,b;
	int a[n]; 
	scanf("%d%d",&n,&b);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		if(a[i] < b)
		{
			printf("%d ",a[i]);
		}
	}
}
