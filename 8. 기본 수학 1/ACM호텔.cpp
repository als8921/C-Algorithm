#include<stdio.h>
int main(){
	int cnt = 0;
	scanf("%d",&cnt);
	
	for(int i = 0; i < cnt; i++)
	{
		int H,W,N;
		scanf("%d%d%d",&H,&W,&N);
		
		if(N%H!=0) printf("%d\n",(N%H) * 100 + N/H + 1);
		else printf("%d\n",H * 100 + N/H);
	}
}
