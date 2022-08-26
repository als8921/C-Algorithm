#include<stdio.h>
int main(){
    char word[100]={};
    int num[26]={0};
    scanf("%s",&word);
    
    for(int i = 0; i < 26; i++)
		num[i]=-1;
    for(int i = 0; i < 26; i++)
    {
		int j = 0;
        while(true)
        {
        	if(word[j]==NULL) break;
            if(97+i == word[j])
            {
                num[i] = j;
                break;
            }
            j++;
        }
    }
    for(int i = 0; i < 26; i++)
		printf("%d ",num[i]);
}
