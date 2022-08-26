#include<stdio.h>
int main(){
	char word[1000001] = {};
	scanf("%[^\n]s",&word);
	int check = 0;
	int cnt = 0;
	for(int i = 0; word[i]!=NULL ;i++)
	{
		if((word[i]!=NULL&&word[i]!=' ')&&(word[i+1]==' '||word[i+1]==NULL)) cnt++;
	}
	printf("%d",cnt);
}		
