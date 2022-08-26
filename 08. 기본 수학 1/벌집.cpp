#include<stdio.h>
int main() {
	int a;
	scanf("%d",&a);
	int i = 0;
	while(true)
	{
		if(a==1) break;
		i++;
		if(a <= 3*i*(i+1)+1 && a >= 3*(i-1)*i+2) break;
	}
	printf("%d",i+1);
}
