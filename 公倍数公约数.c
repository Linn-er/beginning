#include<stdio.h>	 

int main()
    {
    int a,b,c,d,e,x,y;
    printf("请输入两个整数:"); 
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
	if(b>a)
	{
		c=a; 
		a=b;
		b=c; 
	 } 
	 while(b!=0)
	 {
	 	d=a%b;
	 	a=b;
	 	b=d;
	 }
	 printf("最大公约数为：%d\n",a);
	 e=x*y/a;
	 printf("最小公倍数为：%d\n",e);
	return 0; 
    }

