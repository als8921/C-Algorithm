#include<stdio.h>
int main(){
	int n = 0 ;
	int max = 0;
	float sum = 0;
	scanf("%d",&n);
	int a[n];
	float b[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		if(a[i] > max) max = a[i];
	}
	for(int i = 0; i < n; i++)
	{
		b[i]=(float)a[i]/max*100;
		sum += b[i];
	}
	
	printf("%f",sum/n);
	
	
	
}
