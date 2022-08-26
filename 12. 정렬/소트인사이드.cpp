#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b)
{
	if(*(int*)a > *(int*)b) return -1;
	if(*(int*)a < *(int*)b) return 1;
	else return 0;
}

int main()
{
	char n[11];
	scanf("%s",n);
	
	int cnt = 0;
	for(int i = 0; n[i] != NULL; i++) 
		cnt++;
	
	int nlist[cnt];
	for(int i = 0; i < cnt; i++) nlist[i] = (int)n[i]-48;
		
	qsort(nlist,cnt,sizeof(nlist[0]),compare);
	for(int i = 0; i < cnt; i++) printf("%d",nlist[i]);
}
