#include<stdio.h>
#include<string.h>
int main(){
	char word[1000000] = {};
	int cnt[26] = {0};
	scanf("%s",&word);
	
	for(int i = 0; word[i] != NULL; i++)
	{
		if(word[i]>=65 && word[i] <= 90) cnt[word[i]-65]++;
		else cnt[word[i]-97]++;
	}
	
	int max = 0;
	char result;
	for(int i = 0; i < 26; i++)
	{
		if(cnt[i] > max)
		{
			max = cnt[i];
			result = (char)i+65;
		}
	}
	
	int count = 0;
	for(int i = 0; i < 26; i++)
	{
		if(cnt[i] == max) count++;
	}
	
	if(count > 1) result = '?';
	
	printf("%c",result);
}
