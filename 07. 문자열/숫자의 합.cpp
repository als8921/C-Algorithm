#include<stdio.h>
int main(){
	int n = 0;
	int sum = 0;
	scanf("%d",&n); 
	int a[n] = {0};
	for(int i = 0; i < n; i++)
	{
		scanf("%1d",&a[i]);
		sum += a[i];
	}
	printf("%d",sum);
}
