#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d",&n);
	while(n--) 
	{
		float x1,x2,y1,y2,r1,r2;
		scanf("%f%f%f%f%f%f",&x1,&y1,&r1,&x2,&y2,&r2);
		
		float d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
		
		
		if(x1==x2 && y1==y2 && r1!=r2) printf("0");
		else if(x1==x2 && y1==y2 && r1==r2) printf("-1");
		else if((r1+r2)*(r1+r2) < d) printf("0");
		else if((r1+r2)*(r1+r2) == d) printf("1");
		else if((r1+r2)*(r1+r2) > d && (r1-r2)*(r1-r2) < d) printf("2");
		else if((r1-r2)*(r1-r2) == d) printf("1");
		else if((r1-r2)*(r1-r2) > d) printf("0");
		printf("\n");
	}
}
