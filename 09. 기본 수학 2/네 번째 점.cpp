#include<stdio.h>
int main(){
	int x1,x2,x3,y1,y2,y3;
	int X,Y;
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	
	if(x1==x2) X = x3;
	else if(x1==x3) X = x2;
	else X = x1;
	
	if(y1==y2) Y = y3;
	else if(y1==y3) Y = y2;
	else Y = y1;
	
	printf("%d %d",X,Y);
	
} 
