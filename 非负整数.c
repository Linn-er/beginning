#include<stdio.h>
 

int main()
{
	int x,a,i=0,y=0,b,c;
	printf("请输入一个非负整数：");
	scanf("%d",&x);
	a=x;
	while(a>0)
	{
		a/=10;
		i+=1;		
	}
	printf("逆序为:");
	b=x;
	if(x==0)printf("0");		
	while(b>=1)
	{
		c=b%10;
		b=b/10;
		printf("%d",c);
	}
	printf("\n");
	if(x==0)i=1;
	printf("它是%d位数\n",i);
	printf("各位数字为:"); 		
	while(a>0)
	{
		a/=10;
		i+=1;		
	}
	switch(i)
	{
		case 10:
			y=x/1000000000;
			printf("%d ",y);
		case 9:   
			y=x%1000000000;
			y=y/100000000;
			printf("%d ",y);
		case 8: 
			y=x%100000000;
			y=y/10000000;
			printf("%d ",y);
		case 7: 
			y=x%10000000;
			y=y/1000000;
			printf("%d ",y);
		case 6: 
			y=x%1000000;
			y=y/100000;
			printf("%d ",y);
		case 5: 
			y=x%100000;
			y=y/10000;
			printf("%d ",y);
		case 4: 
			y=x%10000;
			y=y/1000;
			printf("%d ",y);
		case 3: 
			y=x%1000;
			y=y/100;
			printf("%d ",y);
		case 2: 
			y=x%100;
			y=y/10;
			printf("%d ",y);
		case 1: 
			y=x%10;
			printf("%d \n",y);
			break;
	}
	return 0;
}
