#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	
	int i = 0;
	int sum = 0;
	while(sum < a)
	{
		i++;
		sum += i;
	}
	int k = a-sum+i;
	if(i%2==0) printf("%d/%d",k,(i+1-k));
	else printf("%d/%d",(i+1-k),k);
}
