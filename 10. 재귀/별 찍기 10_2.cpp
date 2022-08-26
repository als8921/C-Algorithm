#include<stdio.h>
#include<math.h>

char plot[10000][10000] = {NULL};
int n;
void Blank(int x, int y, int range)
{	
	for(int i = x; i < x + range; i++)
	{
		for(int j = y; j < y + range; j++)
			plot[i-1][j-1] = ' ';
	}
}

int main(){
	
	scanf("%d",&n);
	
	int k = 0;
	while(1)
		if(pow(3,++k)==n) break;
		
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			plot[i][j] ='*';
			
	for(int i = 0; i < k; i++)
		for(int j = pow(3,i) + 1; j < n; j += 3*pow(3,i))
			for(int k = pow(3,i) + 1; k < n; k += 3*pow(3,i))
				Blank(j,k,pow(3,i));
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			printf("%c",plot[i][j]);
		printf("\n");	
	}	
}
