#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a*b>0)
		if(a>0) printf("1");
		else printf("3");
	if(a*b<0)
		if(a>0) printf("4");
		else printf("2");
}
