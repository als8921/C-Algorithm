#include<stdio.h>
int main(){
	int BaseCost, VarCost, Price;
	int BreakPoint;
	scanf("%d%d%d", &BaseCost, &VarCost, &Price);
	
	if(Price<=VarCost) BreakPoint = -1;
	else BreakPoint = BaseCost/(Price-VarCost)+1;
	
	printf("%d",BreakPoint); 
}
