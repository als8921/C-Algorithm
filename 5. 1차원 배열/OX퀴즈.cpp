#include<stdio.h>
int main(){
	char a[80] = {};
	int cnt = 0;
	int i = 0;
	int n = 0;
	scanf("%d",&n);
	
	int score = 0;
	int SCORE[n];
	
	for(int k = 0; k < n; k++)
	{
		scanf("%s",&a);
		for(int i = 0; a[i]!=NULL;i++)
		{
			if(a[i]=='O')
			{
				score++;
				for(int j = 1; a[i+j]=='O'; j++) score++;
			}	
		}	
		SCORE[k] = score;
		score = 0;
	}
	
	for(int i = 0; i < n; i++)
	{
		printf("%d\n",SCORE[i]);
	}
}
