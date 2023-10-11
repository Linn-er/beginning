#include<stdio.h>

int add(int x,int y)
{
	int z=x+y;
	return z; 
 } 

int main()
{
	int a=0;
	int b=0;
	int sum=0;
	printf("相加的两数为\n"); 
	scanf("%d,%d",&a,&b);
	sum=add(a,b);
	printf("和为%d\n",sum);
	return 0;
}
