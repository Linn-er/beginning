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
	printf("��ӵ�����Ϊ\n"); 
	scanf("%d,%d",&a,&b);
	sum=add(a,b);
	printf("��Ϊ%d\n",sum);
	return 0;
}
