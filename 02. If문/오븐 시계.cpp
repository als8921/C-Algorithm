#include<stdio.h>
int main()
{
	int h,m;
	int t;
	scanf("%d%d",&h, &m);
	scanf("%d",&t);
	h += (m+t)/60;
	m = (m+t)%60;
	h%=24;
	printf("%d %d",h, m);
}
