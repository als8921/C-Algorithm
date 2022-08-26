#include<stdio.h>
int main()
{
	int list[] = {4,2,1,5,9,8,3};
	int n = 7;
	int sortedlist[8];
		
	int a = n/2;
	int b = n - a;
	
	int ia = 0;
	int ib = b;
	for(int i = 0; i < n; i++)
	{
		
		while(ia < a)
		{
			if(list[ia]<=list[ib])
			{
				sortedlist[i]=list[ia];
				ia++;
				break;
			}
			ia++;
		}
		while(ib < b)
		{
			if(list[ia]>=list[ib])
			{
				sortedlist[i]=list[ib];
				ib++;
				break;
			}
			ib++;
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		printf("%d ",sortedlist[i]);
	}
		
}

