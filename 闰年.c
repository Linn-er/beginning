#include<stdio.h>

int i=0,a;
 
int isleep(int year)
{
	if((year%4)==0&&(year%100)!=0)
	{	
		printf("%d ",year);
	    i+=1; 
	}
	else if((year%400)==0)
	{	
		printf("%d ",year); 
		i+=1; 
	}
	if(i!=0)
		if((i%10)==0)printf("\n");
}

int main()
{
	int sy=2000,fy=2451;
	printf("%d到%d中\n",sy,fy); 
	while(sy<=fy) 
	{
		isleep(sy);
		if(i!=0)
			if((i%10)==0)sy+=3; 
		sy+=1;  
	}	
	printf("\n"); 
	printf("共有%d个闰年\n",i); 
	return 0;
 } 
