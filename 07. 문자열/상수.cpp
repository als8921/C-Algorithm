#include<stdio.h>
int main(){
	int a = 0;
	int b = 0;
	int _a, _b;
	scanf("%d%d",&a,&b);
	_a = (a%10)*100 + ((a/10)%10)*10 + (a/100);
	_b = (b%10)*100 + ((b/10)%10)*10 + (b/100);
	
	int result;
	if(_a >= _b) result = _a;
	else result = _b;
	printf("%d",result);
}
