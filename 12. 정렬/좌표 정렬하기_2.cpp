#include<stdio.h>
#include<stdlib.h> 

struct pointXY
{
	int x;
	int y;
};


int compare(const void *a, const void *b)
{
	pointXY* num1 = (pointXY*)a;
	pointXY* num2 = (pointXY*)b;
	
	if(num1->y < num2->y) return -1;
	if(num1->y > num2->y) return 1;
	else
	{
		if(num1->x < num2->x) return -1;
		if(num1->x > num2->x) return 1;
	}
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	
	pointXY point[n];
	
	for(int i = 0; i < n; i++) scanf("%d %d",&point[i].x,&point[i].y);
	
	
	qsort(point,n,sizeof(point[0]),compare);
	for(int i = 0; i < n; i++) printf("%d %d\n",point[i].x,point[i].y);
}
