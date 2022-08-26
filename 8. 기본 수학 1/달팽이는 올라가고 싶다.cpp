#include<stdio.h>
int main(){
	int a, b, n;
	scanf("%d%d%d",&a,&b,&n);
	if((n-a)%(a-b)==0) printf("%d",((n-a)/(a-b))+1);
	else printf("%d",((n-a)/(a-b))+2);
}
