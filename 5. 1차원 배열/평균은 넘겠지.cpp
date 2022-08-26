#include<stdio.h>
int main(){
	int c = 0;
	int n;
	scanf("%d",&c);
	float result[c] = {};
	
	for(int i = 0; i < c; i++)
	{
		scanf("%d",&n);
		int score[n];
		int sum = 0;
		int cnt = 0;
		float ave = 0;
		{
			for(int j = 0; j < n; j++)
			{
				scanf("%d",&score[j]);
				sum += score[j];
			}
			ave = (float)sum/n;
			
			for(int j = 0; j < n; j++)
			{
				if(score[j] > ave) cnt++;
			}
			
			result[i]=(float)cnt/n*100;
		}
		
	
	}
	
	for (int i = 0; i < c; i++) printf("%.3lf%%\n",result[i]);
}
