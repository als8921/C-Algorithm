#include<stdio.h>
#include<string.h>
int main(){
	int n = 0;
	scanf("%d",&n);
	int num= {0};
	char str[20] = {};
	for(int i = 0; i < n; i++)
	{
		scanf("%d %s",&num,&str);
		
		for(int j = 0; j < strlen(str); j++)
		{
			for(int k = 0; k < num; k++)
				printf("%c",str[j]);
		}
		printf("\n");
	}
}

/*
	#include<stdio.h>
	#include<string.h>
	int main(){
		int n = 0;
		scanf("%d",&n);
		int num[n] = {0};
		char str[n][20] = {};
		for(int i = 0; i < n; i++)
		{
			scanf("%d %s",&num[i],&str[i]);
		}
		
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < strlen(str[i]); j++)
			{
				for(int k = 0; k < num[i]; k++)
					printf("%c",str[i][j]);
			}
			printf("\n");
		}
	}
*/
