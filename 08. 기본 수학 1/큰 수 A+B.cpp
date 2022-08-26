#include<stdio.h>
#include<string.h>
int main(){
	char a[10001] = {0 , };
	char b[10001] = {0 , };
	int result[10002] = {0 , };
	//0 -> 48 9 -> 57
	scanf("%s %s",a,b);
	
	int lenA = strlen(a) - 1;
	int lenB = strlen(b) - 1;
	
	int maxlen;
		if(lenA > lenB) maxlen = lenA;
		else maxlen = lenB;
		
	int cnt = 0;
	while(1)
	{
		if(a[lenA] == NULL && b[lenB] == NULL) break;
		if(a[lenA] != NULL && b[lenB] != NULL)
		{
			result[cnt]+=a[lenA]+b[lenB]-96;
			//printf("%d ",result[cnt]);
		}
		if(a[lenA] == NULL || b[lenB] == NULL)
		{
			result[cnt]+=a[lenA]+b[lenB]-48;
			//printf("%d ",result[cnt]);
		}
		
		if(result[cnt] > 9)
		{
			result[cnt] %= 10;
			result[cnt+1]++;
		}
		
		lenA--;
		lenB--;	
		cnt++;
	}
	if(result[cnt]>0) cnt++;
	for(int i = cnt - 1; i >= 0; i--) printf("%d",result[i]);
	
	
	
}
