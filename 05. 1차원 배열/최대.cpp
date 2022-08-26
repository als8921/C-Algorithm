#include<stdio.h>
int main(){
	int a[9];
	for(int i = 0; i < 9; i++)
	{
		scanf("%d",&a[i]);
	}
	
	int max = -1;
	int k; 
	for(int i = 0; i < 9; i++)
	{
		if(a[i]>max) {
			max=a[i];
			k = i;
		}
	}
	
	printf("%d\n%d",max,k+1);
}
