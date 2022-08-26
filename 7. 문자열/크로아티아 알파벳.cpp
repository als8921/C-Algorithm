#include<stdio.h>
int main(){
	char word[105] = {};
	int cnt = 0;
	scanf("%s",&word);
	int i = 0;
	
	while(word[i]!=NULL)
	{
		if(word[i]=='c'&& word[i+1]=='=') i++;
		else if(word[i]=='c'&& word[i+1]=='-') i++;
		else if(word[i]=='d' && word[i+1]=='z' && word[i+2]=='=')  i+=2;
		else if(word[i]=='d' && word[i+1]=='-') i++;
		else if(word[i]=='l' && word[i+1]=='j') i++;
		else if(word[i]=='n' && word[i+1]=='j') i++;
	    else if(word[i]=='s' && word[i+1]=='=') i++;
		else if(word[i]=='z' && word[i+1]=='=') i++;
		cnt++;
		i++;
	}
	
	
	printf("%d",cnt);  
}
