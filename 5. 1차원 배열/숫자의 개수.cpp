#include<stdio.h>
int main(){
	int a, b, c, k;
	int n[10]={0,0,0,0,0,0,0,0,0,0};
	scanf("%d%d%d",&a,&b,&c);
	
	k=a*b*c;
	while(true)
	{
		for (int i=0; i<10; i++)
		{
			if(k%10==i) n[i]+=1;
		}
		k /= 10;
		
		if(k==0) break;
	}
	
	for (int i=0; i<10; i++)
		{
			printf("%d\n",n[i]);
		} 
}
