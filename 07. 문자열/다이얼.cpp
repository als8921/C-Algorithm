#include<stdio.h>
int main(){
	char word[15] = {};
	int result = 0;
	scanf("%s",&word);
	for(int i = 0; word[i]!=NULL; i++)
	{
		if(word[i]>=65 && word[i]<=67) result += 3;
		else if(word[i]<=70) result +=4;
		else if(word[i]<=73) result +=5;
		else if(word[i]<=76) result +=6;
		else if(word[i]<=79) result +=7;
		else if(word[i]<=83) result +=8;
		else if(word[i]<=86) result +=9;
		else if(word[i]<=90) result +=10;
	}
	
	printf("%d",result);
}
