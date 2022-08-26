#include<stdio.h>
int hansu(int k){
	int count = 0;
	for(int n = 1; n <= k; n++)
	{
		int cnt = 0;
		
		for(int i = n; i > 0; i /= 10)
		{
			cnt++;
		}
		
		int j = 0;
		bool state = false;
		int a[cnt];
		for(int i = n; i > 0; i /= 10)
		{
			a[j] = i%10;
			j++;
		}
		if(cnt >= 3)
		{
			for(int i = 0; i < cnt-1; i++)
			{
				if(a[i]-a[i+1]==a[0]-a[1])
				{
					state = true;
				}
				else state = false;
			}
		}
		if(cnt == 1 || cnt==2) state = true;
		if(state)
		{
			count++;
		}
	}
	
	return count;
	
	
}

int main(){
	
	int n = 0;
	scanf("%d",&n);
	
	printf("%d",hansu(n));
}
