#include<stdio.h>
int main(){
	int r;
	scanf("%d",&r);
	double pi = 3.14159265358979;
	double a1 = (double)r*r*pi;
	double a2 = (double)2*r*r;
	printf("%.6lf\n%.6lf",a1,a2);
}
