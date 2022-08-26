#include<stdio.h>

int main()
{
	int a[5];
	a[0] = 1;
	a[1] = 2;
	
	int temp  = a[0];
	a[0] = a[1];
	a[1] = temp;
	
	printf("%d %d",a[0],a[1]); 
}
