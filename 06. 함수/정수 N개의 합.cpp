#include<stdio.h>

int _sum(int a[], int n){
	
	int result = 0;
	for(int i = 0; i < n; i++)
	{
		result += a[i];
	}
	return result;
}

int main(){
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	
	printf("%d",_sum(a,10));
	
}


