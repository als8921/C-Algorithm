#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	char word[n][100];
	int check[n]; 
	for(int i = 0; i < n; i++) check[i] = 1;
	for(int i = 0; i < n; i++) scanf("%s",&word[i]);
	
	for(int i = 0; i < n; i++)//n�� �ݺ�
	{
		for(int j = 0; word[i][j]!=NULL; j++)//j���� ���� ����ŭ �ݺ�
		{
			for(int alpha = 0; alpha < 26; alpha++)//a~z���� �ݺ�
			{
				if(word[i][j]== 97 + alpha)
				{
					int k;
					for(k = 1; word[i][j+k] == word[i][j]; k++);
					
					for(int m = k+1; word[i][j+m]!=NULL; m++)
					{
						if(word[i][j+m]==word[i][j]) //�׷�ܾ� �ƴ� 
						{
							check[i] = 0;
							break;
						}
					}
				}
				if(check[i]==0) break;
			}
		}
	}
	int cnt = 0;
	for(int i = 0; i < n; i++) if(check[i]==1) cnt++;
	
	printf("%d",cnt);
	
	
}
